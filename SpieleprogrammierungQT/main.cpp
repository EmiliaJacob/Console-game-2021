#include "mainwindow.h"
#include "field.h"
#include "player.h"
#include <QApplication>
#include <QDebug>
#include <QString>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication qApplication(argc, argv);
    Game game;
    MainWindow mainWindow;
    Player player;

    QObject::connect(&mainWindow, &MainWindow::receivedCommand, &game, &Game::HandleCommand);
    QObject::connect(&States::idleState, &IdleState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);

    mainWindow.show();
    return qApplication.exec();
}
