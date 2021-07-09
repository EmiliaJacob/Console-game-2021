#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inputparser.h"
#include <QMessageBox>
#include <comunicazionhendler.h>
#include <QTextStream>
#include <QFile>

#include <QPushButton>

#include <QFont>


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
    textFont.setFamily("monospace");
    textFont.setFixedPitch(true);
    ui->textBrowser->setFont(textFont);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Consol
void MainWindow::on_Send_clicked(){
    dotext();}
void MainWindow::on_lineEdit_returnPressed(){
dotext();}

void MainWindow::dotext(){
    QString command = ui ->lineEdit->text();
    if(!command.isEmpty()){
       ui->lineEdit->clear();
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
    qDebug() << "received input for consoe: " + input;
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
void MainWindow::UpdatePositionInUi(QString oldPosition, QString newPosition)
{
    qDebug() << "OldPosition: " << oldPosition << " NewPosition: " << newPosition;
    muveuser(oldPosition);
    muveuser(newPosition);
}
void MainWindow::muveuser(QString posishon){
    QString button= "pushButton_"+ posishon;
    QPushButton *but = MainWindow::findChild<QPushButton*>(button);
    QString style=but->styleSheet();
    if(style.length()>130){discoverUimap(button);}
    style.insert(35, "0");
    style.remove(36,1);
    but->setStyleSheet(style);
}
void MainWindow::discoverUimap(QString button){
    QPushButton *but = MainWindow::findChild<QPushButton*>(button);
    QString styl=but->styleSheet();
    styl.remove(44,43);
    qDebug() << styl;
    but->setStyleSheet(styl);
}


//inventar
//inventar clicked
void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
//    ui->textBrowser->append(Qstring getintendiscription(inventory[row]));
    if(row==0) ui->textBrowser->append("it is emti tank\n");
    if(row==1) ui->textBrowser->append("A Cristal\n it's schinie nofing more\n");
    if(row==2) ui->textBrowser->append("A purple fluorescence ore \n It's rather heavy\n");
    if(row==3) ui->textBrowser->append("A red ore \n It's rather light\n");
}
//add intem
void MainWindow::UpdateUiinventaradd(QString itemName, int amount){
    qDebug() << "Picked up: " + itemName + " " + QString::number(amount) + " times";
   //int i=0;
   //bool exist=false;
   //while (inventory[i]!=-1&&exist==false) {
   //    if(inventory[i]==item_id){
   //        exist=true;
   //
   //    }else{
   //        i++;
   //    }
   //}
   ///add item
   //if(exist==true){
// //      ui->tabWidget->modifi cell;
   //}
   //else{
   //    inventory[i]=item_id;
   //   // getitemnamebyid(item_id)
   //     // ui->tableWidget->model()->insertRow();
   //}
}
//tacke item
void MainWindow::UpdateUiinventarsuptrakt(QString itemName, int amount){
    qDebug() << "Dropped: " + itemName + " " + QString::number(amount) + " times";
   //int i=0;
   //bool exist=false;
   //while (inventory[i]!= item_id) {
   //        i++;
   //}
   ////if(dubel item){}else{
   //ui->tableWidget->model()->removeRow(i);
   //i++;
   //while (i<21) {
   //      inventory[i-1]=inventory[i];
   //}
   //inventory[20]=-1;
//}
}

//opzionen
//New Game
void MainWindow::on_pushButton_newgame_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//Load Game
void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    ui->stackedWidget->setCurrentIndex(1);
    if(!mGame->LoadGame()){
        QMessageBox::information(0,"Error", " file not fonde");
    }
    ui->textBrowser->append("System reboot 100% \n all funktions rady \n");
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
