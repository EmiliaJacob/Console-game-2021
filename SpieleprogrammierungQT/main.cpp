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

    Field g,h,j,k;
    g.Forward = &h;
    h.Backward = &g;

    Player Felix;
    Felix.CurrentField = &g;
    Felix.Move("forward");
    Felix.Move("backward");
    Felix.Move("left");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
