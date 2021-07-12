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

    QObject::connect(&game, &Game::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);

    QObject::connect(&game.Level_One, &Level::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&game.Level_One, &Level::playerDiesRequest, &game.mPlayer, &Player::Die);

    QObject::connect(&game.mPlayer, &Player::pickedUpItems, &mainWindow, &MainWindow::UpdateUiinventaradd);
    QObject::connect(&game.mPlayer, &Player::droppedItems, &mainWindow, &MainWindow::UpdateUiinventarsuptrakt);
    QObject::connect(&game.mPlayer, &Player::moved, &mainWindow, &MainWindow::UpdatePositionInUi);
    QObject::connect(&game.mPlayer, &Player::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);

    QObject::connect(&mainWindow, &MainWindow::receivedCommand, &game, &Game::HandleCommand);

    QObject::connect(&States::idleState, &IdleState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::idleState, &IdleState::moveRequest, &game.mPlayer, &Player::Move);
    QObject::connect(&States::idleState, &IdleState::descriptionRequest, &game.mPlayer, &Player::GetFieldDescription);
    QObject::connect(&States::idleState, &IdleState::changeStateRequest, &game, &Game::ChangeState);
    QObject::connect(&States::idleState, &IdleState::saveGameRequest, &game, &Game::SaveGame);
    QObject::connect(&States::idleState, &IdleState::setSavePointRequest, &game.mPlayer, &Player::SetSavePoint);

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

    QObject::connect(&States::fastTravelState, &FastTravelState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::fastTravelState, &FastTravelState::fastTravelRequest,&game.mPlayer, &Player::FastTravel);
    QObject::connect(&States::fastTravelState, &FastTravelState::listSavePointsRequest, &game.mPlayer, &Player::ListAvailableSavePoints);
    QObject::connect(&States::fastTravelState, &FastTravelState::changeStateRequest, &game, &Game::ChangeState);

    QObject::connect(&States::combineItemsState, &CombineItemsState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::combineItemsState, &CombineItemsState::changeStateRequest, &game, &Game::ChangeState);
    QObject::connect(&States::combineItemsState, &CombineItemsState::combineItemsRequest, &game.mPlayer, &Player::CombineItems);
    QObject::connect(&States::combineItemsState, &CombineItemsState::listInventoryRequest, &game.mPlayer, &Player::ListInventory);

    QObject::connect(&States::useItemState, &UseItemState::issueConsoleOutput, &mainWindow, &MainWindow::PrintOntoConsole);
    QObject::connect(&States::useItemState, &UseItemState::changeStateRequest, &game, &Game::ChangeState);
    QObject::connect(&States::useItemState, &UseItemState::useItemRequest, &game.mPlayer, &Player::UseItem);
    QObject::connect(&States::useItemState, &UseItemState::listInventoryRequest, &game.mPlayer, &Player::ListInventory);

    mainWindow.SetGame(&game);
    mainWindow.show();

    return qApplication.exec();
}
