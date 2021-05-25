#include "mainwindow.h"
#include "field.h"
#include "player.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Field g,h,j,k;
    g.Forward = &h;
    h.Backward = &g;

    Player Felix;
    Felix.CurrentPosition = &g;
    Felix.Move("forward");
    Felix.Move("backward");
    Felix.Move("left");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
