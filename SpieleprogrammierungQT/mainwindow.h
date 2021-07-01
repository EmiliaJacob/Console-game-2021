#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include "player.h"

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

    void WriteLine(QString newLine);

private slots:
    void on_Send_clicked();

    void on_lineEdit_returnPressed();

    void dotext();

    void on_lineEdit_upPressed();

    void on_pushButton_newgame_clicked();

    void on_pushButton_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_titel_clicked();

    void on_pushButton_leave_clicked();

    void on_pushButton_help_clicked();

    void on_downbutton_clicked();

    void on_upbutton_clicked();

    void UpdatePositionInUi(QString, QString);
    void on_tableWidget_cellClicked(int row, int column);

private:
    Game mGame;
    Ui::MainWindow *ui;
    comunicazionhendler *mComunicazionhdendler;
};
#endif // MAINWINDOW_H
