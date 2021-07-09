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

    QObject::connect(&game.mPlayer, &Player::pickedUpItems, &mainWindow, &MainWindow::UpdateUiinventaradd);
    QObject::connect(&game.mPlayer, &Player::droppedItems, &mainWindow, &MainWindow::UpdateUiinventarsuptrakt);
    QObject::connect(&game.mPlayer, &Player::moved, &mainWindow, &MainWindow::UpdatePositionInUi);

    QObject::connect(&mainWindow, &MainWindow::receivedCommand, &game, &Game::HandleCommand);
    QObject::connect(&States::idleState, &IdleState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::idleState, &IdleState::moveRequest, &game.mPlayer, &Player::Move);
    QObject::connect(&States::idleState, &IdleState::descriptionRequest, &game.mPlayer, &Player::GetFieldDescription);
    QObject::connect(&States::idleState, &IdleState::moveRequest, &game.mPlayer, &Player::Move);
    QObject::connect(&States::idleState, &IdleState::changeStateRequest, &game, &Game::ChangeState);
    QObject::connect(&game.mPlayer, &Player::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);

    QObject::connect(&States::pickUpState, &PickUpState::changeStateRequest, &game, &Game::ChangeState);
    QObject::connect(&States::pickUpState, &PickUpState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::pickUpState, &PickUpState::listAvailableItemsRequest, &game.mPlayer, &Player::ListAvailableItemsOnField);
    QObject::connect(&States::pickUpState, &PickUpState::pickUpOneRequest, &game.mPlayer, &Player::PickUpItemOfType);
    QObject::connect(&States::pickUpState, &PickUpState::pickUpManyRequest, &game.mPlayer, &Player::PickUpMultipleItemsOfType);
    QObject::connect(&States::pickUpState, &PickUpState::pickUpAllRequest, &game.mPlayer, &Player::PickUpAllItemsOfType);

    QObject::connect(&States::dropState, &DropState::changeStateRequest, &game, &Game::ChangeState);
    QObject::connect(&States::dropState, &DropState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::dropState, &DropState::listInventoryRequest, &game.mPlayer, &Player::ListInventory);
    QObject::connect(&States::dropState, &DropState::dropOneRequest, &game.mPlayer, &Player::DropItemOfType);
    QObject::connect(&States::dropState, &DropState::dropManyRequest, &game.mPlayer, &Player::DropMultipleItemsOfType);
    QObject::connect(&States::dropState, &DropState::dropAllRequest, &game.mPlayer, &Player::DropAllItemsOfType);

    mainWindow.SetGame(&game);
    mainWindow.show();
    return qApplication.exec();
}
