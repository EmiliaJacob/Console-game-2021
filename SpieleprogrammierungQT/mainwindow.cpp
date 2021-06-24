#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <comunicazionhendler.h>
#include <QTextStream>
#include <QFile>

int florlevel=0,maxflorlevel=1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->tabWidget->setTabIcon(1, const QIcon & icon);
    //comunicazionhendler = new comunicazionhendler(this);
    ui->stackedWidget->setCurrentIndex(0);
    mGame.LoadGame();
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
    QString command = ui ->lineEdit->text();                        //list befel ein
    if(!command.isEmpty()){
       QString answer = "~$ " + command + "\n" + "        ";
       ui->textBrowser->append(answer);                             //zeigt befel und antwort im text feld
       ui->lineEdit->clear();
       game.InputHandler(command);
       //answer=deinemetode(command);
       //ui->textBrowser->append(answer);
    }
}





//New Game
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//Load Game
void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    ui->stackedWidget->setCurrentIndex(1);
    if(!game.LoadGame()){
        QMessageBox::information(0,"Error", " file not fonde");
    }
    ui->textBrowser->append("System reboot 100% \n all funktions rady \n");
}

//zu Titelbildschirm
void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//verlasen
void MainWindow::on_pushButton_5_clicked()
{
    //game.SaveGame();
    close();
}

//Hilfe
void MainWindow::on_pushButton_8_clicked()
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
    QString hilfestring = "Hiengabehofel ...";
    ui->textBrowser->append(hilfestring);

}

//mapup Ʌ
void MainWindow::on_upbutton_clicked()
{
    if(florlevel>0){
        ui->stackedWidget_2->setCurrentIndex( ui->stackedWidget_2->currentIndex()-1);
        florlevel-=1;
        ui->Florlabel->setText("UG " +  QString::number(florlevel));
    }
}

//mapdown V
void MainWindow::on_downbutton_clicked()
{
    if(florlevel<maxflorlevel){
        ui->stackedWidget_2->setCurrentIndex(+1);
        florlevel+=1;
        ui->Florlabel->setText("UG " +  QString::number(florlevel));
    }
}
