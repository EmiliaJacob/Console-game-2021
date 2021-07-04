#include "mainwindow.h"
#include "field.h"
#include "player.h"
#include <QApplication>
#include <QString>
#include "game.h"
#include "inputhandler.h"

int main(int argc, char *argv[])
{
    // Create instances
    QApplication a(argc, argv);

    Game game;

    MainWindow mainWindow;

    InputHandler inputHandler;

    // Dependeny Injection
    inputHandler.SetGame(game);
    inputHandler.SetMainWindow(&mainWindow);

    mainWindow.SetInputHandler(inputHandler);
    mainWindow.SetGame(game);

    // Run everything
    mainWindow.show();
    return a.exec();
}
