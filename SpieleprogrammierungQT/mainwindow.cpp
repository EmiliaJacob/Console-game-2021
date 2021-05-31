#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <comunicazionhendler.h>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //comunicazionhendler = new comunicazionhendler(this);
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
       QString answer = comunicazionhendler->playersays(command);   //oferarbetet befel
       ui->textBrowser->append(answer);                             //zeigt befel und antwort im text feld
       ui->lineEdit->clear();
    }
}
void MainWindow::on_lineEdit_upPressed(){

}




