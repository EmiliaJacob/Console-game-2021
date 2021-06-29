#include "game.h"
#include "field.h"
#include "gameboard.h"

#include <QFile>
#include <QJsonDocument>
#include <QDebug>
#include <QString>

Game::Game()
{
}

bool Game::LoadGame()
{
    //Loading Fields
    QFile fieldsFile("fields.json");
    if(!fieldsFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open fields - file");
        return false;
    }

    QByteArray fieldsData = fieldsFile.readAll();
    QJsonDocument fieldsDoc(QJsonDocument::fromJson(fieldsData));

    mGameBoard.Read(fieldsDoc.object());

    // Loading Player
    QFile playerFile("player.json");
    if(!playerFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open save file");
        return false;
    }

    QByteArray playerData = playerFile.readAll();
    QJsonDocument playerDoc(QJsonDocument::fromJson(playerData));

    mPlayer.Read(playerDoc.object());

    return true;
}

void Game::InputHandler(QString input)
{
    if(input == "mf" || input == "move forward")
    {
        mPlayer.Move("forward");
        return;
    }
    if(input == "mb" || input == "move backward")
    {
        mPlayer.Move("backward");
        return;
    }
    if(input == "mr" || input == "move right")
    {
        mPlayer.Move("right");
        return;
    }
    if(input == "ml" || input == "move left")
    {
        mPlayer.Move("left");
        return;
    }
    if(input == "ai" || input == "available items")
    {
        mPlayer.ListAvailableItems();
        return;
    }
    if(input == "d" || input == "description")
    {
        mPlayer.GetFieldDescription();
        return;
    }

    //Pick-up and Drop Items
    QStringList splittedInput = input.split(" ");

    if(splittedInput.length() == 2) // pick-up/drop only one item
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup")
        {
            mPlayer.PickUpItemOfType(splittedInput[1]);
            return;
        }
        if(splittedInput[0] == "d" || splittedInput[0] == "drop")
        {
            mPlayer.DropItemOfType(splittedInput[1]);
            return;
        }
    }

    if(splittedInput.length() == 3) // pick-up/drop multiple or all available items
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                mPlayer.PickUpAllItemsOfType(splittedInput[1]);
                return;
            }
            else
            {
                mPlayer.PickUpMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
                return;
            }
        }

        if(splittedInput[0] == "d" || splittedInput[0] == "drop")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                mPlayer.DropAllItemsOfType(splittedInput[1]);
                return;
            }
            else
            {
                mPlayer.DropMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
                return;
            }
        }
    }

    qDebug() << "No fitting interpretation was found for: " << input; //TODO: Define return-value when nothing matched
}
