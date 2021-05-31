#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <comunicazionhendler.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Send_clicked();

    void on_lineEdit_returnPressed();
    void dotext();
    void on_lineEdit_upPressed();
private:
    Ui::MainWindow *ui;
    comunicazionhendler *comunicazionhendler;
};
#endif // MAINWINDOW_H
