#include "mainwindow.h"
#include "field.h"
#include "player.h"
#include <QApplication>
#include <QDebug>
#include <QString>
#include "game.h"

int main(int argc, char *argv[])
{
   // Game game;
    //game.LoadGame();

    //game.Player.Move("forward");
    //game.Player.Move("backward");
    int * pointer;
    int i = 9;
    pointer = &i;
    qDebug() << "Pointer: " << *pointer;


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
