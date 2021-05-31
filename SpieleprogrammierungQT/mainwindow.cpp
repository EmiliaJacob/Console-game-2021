#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <comunicazionhendler.h>
#include <QTextStream>
#include <QFile>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->tabWidget->setTabIcon(1, const QIcon & icon);
    //comunicazionhendler = new comunicazionhendler(this);
    ui->stackedWidget->setCurrentIndex(0);
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
       //answer=deinemetode(command);
       //ui->textBrowser->append(answer);
    }
}
void MainWindow::on_lineEdit_upPressed(){

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
    QFile file(".\\savelogfiel.txt");
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0,"Error",file.errorString() + " file not fonde");
    }
    else{
        QTextStream log(&file);
        ui->textBrowser->append(log.readAll());
    }
    ui->textBrowser->append("System reboot 100% \n all funktions rady \n letzten 10 bevefele widerhergestelt \n");
}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    //ui->tabWidget->
}
//zu Titelbildschirm
void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//verlasen
void MainWindow::on_pushButton_5_clicked()
{
    //save();
    close();
}
