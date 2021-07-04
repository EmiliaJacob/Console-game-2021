#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <QString>
#include "game.h"
#include "mainwindow.h"
#include "player.h"

class InputHandler
{

public:
    InputHandler();
    void DoIt(QString input);
    void SetGame(Game game);
    void SetMainWindow(MainWindow* mainWindow);

private:
    Game* mGame;
    MainWindow* mMainWindow;
};

#endif // INPUTHANDLER_H
