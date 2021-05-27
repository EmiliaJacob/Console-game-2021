#include "mainwindow.h"
#include "field.h"
#include "player.h"
#include <QApplication>
#include <QString>
#include "game.h"

int main(int argc, char *argv[])
{
    Game game;
    game.LoadGame();

    game.Player.Move("forward");
    game.Player.Move("backward");
    //Felix.Move("backward");
    //Felix.Move("left");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
