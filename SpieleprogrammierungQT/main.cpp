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
    QObject::connect(&mainWindow, &MainWindow::receivedCommand, &game, &Game::HandleCommand);
    QObject::connect(&States::idleState, &IdleState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::idleState, &IdleState::moveRequest, &game.mPlayer, &Player::Move);
    QObject::connect(&States::idleState, &IdleState::descriptionRequest, &game.mPlayer, &Player::GetFieldDescription);
    QObject::connect(&States::idleState, &IdleState::moveRequest, &game.mPlayer, &Player::Move);
    QObject::connect(&game.mPlayer, &Player::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);

    mainWindow.SetGame(&game);
    mainWindow.show();
    return qApplication.exec();
}
