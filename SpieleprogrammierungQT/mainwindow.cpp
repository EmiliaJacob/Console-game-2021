#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <comunicazionhendler.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Send_clicked()
{
    QString comand = ui ->lineEdit->text();
    //ui->textBrowser->comand;
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString comand = ui ->lineEdit->text();
    QString anser = comunicazionhendler.playersays(comand);
    ui ->textBrowser->
    QMessageBox::warning(this,"Peng","Hades ist ein gutes spiel");
}
