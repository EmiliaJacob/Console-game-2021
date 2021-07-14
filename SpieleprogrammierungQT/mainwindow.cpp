#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inputparser.h"
#include <QMessageBox>
#include <comunicazionhendler.h>
#include <QTextStream>
#include <QFile>

#include <QPushButton>

#include <QFont>
#include <QTimer>


int florlevel=0,maxflorlevel=1, inventory[20];
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->tabWidget->setTabIcon(1, const QIcon & icon);
    ui->stackedWidget->setCurrentIndex(0);

    for (int i=0;i<20 ;i++ ) {
        inventory[i]=-1;
    }
     inventory[0]=1;


    QFont textFont;
    textFont.setFamily("monospace[Consolas]");
    textFont.setFixedPitch(true);
    ui->textBrowser->setFont(textFont);
    //ui->textBrowser->setAcceptRichText(true);
    ui->lineEdit->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Consol
void MainWindow::on_Send_clicked()
{
    dotext();
}
void MainWindow::on_lineEdit_returnPressed()
{
    dotext();
}

void MainWindow::dotext(){
    QString command = ui ->lineEdit->text().trimmed();

    if(!command.isEmpty()){
       ui->lineEdit->clear();
       PrintOntoConsole("Input: " + command);
    }

    emit receivedCommand(command);
}

void MainWindow::on_lineEdit_upPressed()
{

}

void MainWindow::on_tabWidget_tabBarClicked(int)
{

}

void MainWindow::PrintOntoConsole(QString input)
{
    QString newLine = "~$ " + input + "\n";
    ui->textBrowser->append(newLine);
}

//map
//mapup Ʌ
void MainWindow::on_upbutton_clicked()
{
    if(florlevel>0){
       // ui->stackedWidget_2->setCurrentIndex( ui->stackedWidget_2->currentIndex()-1);
        florlevel-=1;
        //ui->Florlabel->setText("UG " +  QString::number(florlevel));
    }
}

//mapdown V
void MainWindow::on_downbutton_clicked()
{
    if(florlevel<maxflorlevel){
        //ui->stackedWidget_2->setCurrentIndex(+1);
        florlevel+=1;
        //ui->Florlabel->setText("UG " +  QString::number(florlevel));
    }
}

//mapupdate


void MainWindow::UpdatePositionInUi(Field* newField, QString lastFieldId)
{
    QString buttonName = "Field_"+newField->Id;

    QString imageName;

    imageName.append("p_");

    if(newField->FieldUp != "x" && newField->FieldUp != "b")
        imageName.append("n");
    if(newField->FieldRight != "x" && newField->FieldRight != "b")
        imageName.append("e");
    if(newField->FieldDown != "x" && newField->FieldDown != "b")
        imageName.append("s");
    if(newField->FieldLeft != "x" && newField->FieldLeft != "b") {
        imageName.append("w");
    }

    imageName.append(".png");

    qDebug() << "IMAGENAME: " + imageName;

    UpdateButtonImage(imageName, buttonName);



    //Change to icon of the last field to one without the player marker
    Field* lastField = Game::Level_One.GetField(lastFieldId);

    QString lastFieldButtonName = "Field_"+lastFieldId;

    QString imageNameLastField;

    if(lastField->FieldUp != "x" && lastField->FieldUp != "b")
        imageNameLastField.append("n");
    if(lastField->FieldRight != "x" && lastField->FieldRight != "b")
        imageNameLastField.append("e");
    if(lastField->FieldDown != "x" && lastField->FieldDown != "b")
        imageNameLastField.append("s");
    if(lastField->FieldLeft != "x" && lastField->FieldLeft != "b")
        imageNameLastField.append("w");

    imageNameLastField.append(".png");

    UpdateButtonImage(imageNameLastField, lastFieldButtonName);
}

void MainWindow::UpdateButtonImage(QString imageName, QString buttonName) {
    QPixmap pixmap("sorcebilder/" + imageName);
    QIcon ButtonIcon(pixmap);
    QPushButton* button = MainWindow::findChild<QPushButton*>(buttonName);
    button->setIcon(ButtonIcon);
    button->setIconSize(pixmap.rect().size());
}

void MainWindow::muveuser(QString posishon){
    //QString button= "pushButton_"+ posishon;
    //QPushButton *but = MainWindow::findChild<QPushButton*>(button);
    //QString style=but->styleSheet();
    //if(style.length()>130){discoverUimap(button);}
    //style.insert(35, "0");
    //style.remove(36,1);
    //but->setStyleSheet(style);
    //QString button= "pushButton_"+ posishon;
    //QPushButton but = MainWindow::findChild<QPushButton>(button);
    //QString style=but.styleSheet();
    //if(style.length()>130){discoverUimap(button);}
    //style=but.styleSheet();
    //if(style[35]=="1"){
    //    style.insert(35, "0");
    //    style.remove(36,1);
    //}else{
    //    style.insert(35, "1");
    //    style.remove(36,1);
    //}
    //but.setStyleSheet(style);
}
void MainWindow::discoverUimap(QString button){
    //QPushButton but = MainWindow::findChild<QPushButton>(button);
    //QString styl=but->styleSheet();
    //styl.remove(44,43);
    //but->setStyleSheet(styl);
}




//inventar
//inventar clicked
void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    QString itemName = ui->tableWidget->item(row, column)->text();
    emit printItemDescriptionRequest(itemName);
}

void MainWindow::UpdateUiinventaradd(QString itemName, Inventory* inventory){

    QString amountInInventory = QString::number(inventory->GetItemAmount(itemName));

    // Case: Item is already in table once
    for(int rowCounter=0; rowCounter<ui->tableWidget->rowCount(); rowCounter++) {
        QTableWidgetItem* item = ui->tableWidget->item(rowCounter, 0);
        qDebug() << item->text();
        if(item->text() == itemName) {
            ui->tableWidget->setItem(rowCounter, 1, new QTableWidgetItem(amountInInventory));
            return;
        }
    }

    // Case: Item isn't in table yet
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem(itemName));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,new QTableWidgetItem(amountInInventory));
}

void MainWindow::UpdateUiinventarsuptrakt(QString itemName, Inventory* inventory){

    if(inventory->GetItemAmount(itemName) == 0) {
        for(int rowCounter=0; rowCounter<ui->tableWidget->rowCount(); rowCounter++) {
            QTableWidgetItem* item = ui->tableWidget->item(rowCounter, 0);
            if(item->text() == itemName) {
                ui->tableWidget->removeRow(rowCounter);
                return;
            }
        }
    }
    else {
        QString amountInInventory = QString::number(inventory->GetItemAmount(itemName));
        for(int rowCounter=0; rowCounter<ui->tableWidget->rowCount(); rowCounter++) {
            QTableWidgetItem* item = ui->tableWidget->item(rowCounter, 0);
            qDebug() << item->text();
            if(item->text() == itemName) {
                ui->tableWidget->setItem(rowCounter, 1, new QTableWidgetItem(amountInInventory));
                return;
            }
        }
    }
}



//opzionen
//New Game
void MainWindow::on_pushButton_newgame_clicked()
{


    ui->stackedWidget->setCurrentIndex(1);
    PrintSystemBoot(true);
    //emit newGameStateRequest();


    //States::newGameState.PrintMenu();

    UpdateButtonImage("p_e.png", "Field_1");
}

//Load Game
void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    ui->stackedWidget->setCurrentIndex(1);

    //emit initialLoadStateRequest();
    //
    //States::initialLoadGameState.PrintMenu();

   //if(!mGame->LoadGame(0)){
   //    QMessageBox::information(0,"Error", " file not fonde");
   //}

    // TODO: Remove again
   // ui->lineEdit->setDisabled(false);
   //  ui->lineEdit->setFocus();
    PrintSystemBoot(false);

}


void MainWindow::PrintSystemBoot(bool newGame)
{
    ui->textBrowser->append("I'm initializing please wait");
    for(int i=0; i<1000; i+=200) {
        QTimer::singleShot(i, this, [=] () {
            ui->textBrowser->textCursor().insertText(".");
        });
    }
    for(int i=1000; i<2000; i+=200) {
        QTimer::singleShot(i, this, [=] () {
            ui->textBrowser->textCursor().deletePreviousChar();
        });
    }
    for(int i=2000; i<3000; i+=200) {
        QTimer::singleShot(i, this, [=] () {
            ui->textBrowser->textCursor().insertText(".");
        });
    }
    for(int i=3000; i<3400; i+=200) {
        QTimer::singleShot(i, this, [=] () {
            ui->textBrowser->textCursor().deletePreviousChar();
        });
    }

    QTimer::singleShot(3500, this, [=] () {
        DeleteLastLine();
        ui->textBrowser->append("I have successfully initialized");
    });

    QTimer::singleShot(4250, this, [=] () {
        DeleteLastLine();
        ui->textBrowser->append("Reading my memory: <");
    });

    for(int i=4250; i<7600; i+=200) {
        QTimer::singleShot(i, this, [=] () {
            ui->textBrowser->textCursor().insertText("-");
        });
    }

    QTimer::singleShot(7600, this, [=] () {
        ui->textBrowser->textCursor().insertText(">");
    });

    QTimer::singleShot(8100, this, [=] () {
        DeleteLastLine();
        ui->textBrowser->append("Memory was successfully read");
    });

    QTimer::singleShot(9000, this, [=] () {
        DeleteLastLine();
        ui->textBrowser->append("Welcome");
    });

    QTimer::singleShot(9500, this, [=] () {
        DeleteLastLine();
        //States::idleState.PrintMenu();
        ui->lineEdit->setDisabled(false);
        ui->lineEdit->setFocus();
        if(newGame){
            emit newGameStateRequest();
            States::newGameState.PrintMenu();
        }
        else {
            emit initialLoadStateRequest();
            States::initialLoadGameState.PrintMenu();
        }
    });
}

void MainWindow::DeleteLastLine()
{
    // von https://stackoverflow.com/questions/15326569/removing-last-line-from-qtextedit
    ui->textBrowser->setFocus();
    QTextCursor storeCursorPos = ui->textBrowser->textCursor();
    ui->textBrowser->moveCursor(QTextCursor::End, QTextCursor::MoveAnchor);
    ui->textBrowser->moveCursor(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
    ui->textBrowser->moveCursor(QTextCursor::End, QTextCursor::KeepAnchor);
    ui->textBrowser->textCursor().removeSelectedText();
    ui->textBrowser->textCursor().deletePreviousChar();
    ui->textBrowser->setTextCursor(storeCursorPos);
}

//zu Titelbildschirm
void MainWindow::on_pushButton_titel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//verlasen
void MainWindow::on_pushButton_leave_clicked()
{
    mGame->SaveGame();
    close();
}

//Hilfe
void MainWindow::on_pushButton_help_clicked()
{
/*
    QFile hilfeanleitung("./sorce/hilfefile.txt");
    if(!hilfeanleitung.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "fiel not open";
    }
    QTextStream in(&hilfeanleitung);
    QString hilfenachricht = in.readAll();
    ui->textBrowser->append(hilfenachricht);
    */
    QString hilfestring = "Hello users of the DET-3026 is at your disposal. \n Use the following buttons to move forward:\nmb==move bage\nmf==move forward\nml==move levt left\nmr==move right\n\nAnd the following for interaction:p==pick-up\nd==drop only one item\na==drop multiple or all available items\nai==available items\n\n";
    ui->textBrowser->append(hilfestring);

}

void MainWindow::SetGame(Game* game)
{
    mGame = game;
}


//Story mails
void MainWindow::on_tableWidget_2_cellPressed(int row, int column)
{
    if(row==0) ui->textBrowser->append("Ihr erster autrag ist es die welt zu fernichten.");
    if(row==1) ui->textBrowser->append("Wilkimm auf der worschungseinritung TJ-0015.");

}
