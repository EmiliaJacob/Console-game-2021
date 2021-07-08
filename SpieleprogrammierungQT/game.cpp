#include "game.h"
#include "field.h"
#include "level.h"

#include <QFile>
#include <QJsonDocument>
#include <QDebug>
#include <QString>

Game::Game()
{
   currentState = &States::idleState; // TODO: Move into own function
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

    Level_One.Read(fieldsDoc.object());

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
void Game::HandleCommand(int command)
{
    qDebug() << "Received command: " + QString::number(command);
    currentState->ExecuteCommand(command);
    currentState->PrintMenu();
}

QString Game::SaveGame()
{
    QFile playerFile(QStringLiteral("player.json"));

    if(!playerFile.open(QIODevice::WriteOnly))
    {
        return("Couldn't open playerFile");
    }
    else
    {
        QJsonObject playerObject;
        mPlayer.Write(playerObject);

        playerFile.write(QJsonDocument(playerObject).toJson());
    }

    QFile fieldsFile(QStringLiteral("fields.json"));

    if(!fieldsFile.open((QIODevice::WriteOnly)))
    {
        return("Couldn't open fieldsFile");
    }
    else
    {
        QJsonObject gameBoardObject;
        Level_One.Write(gameBoardObject);

        fieldsFile.write(QJsonDocument(gameBoardObject).toJson());
    }

    return "Saved sucessfully";
}

QString Game::InputHandler(QString input)
{
    if(input == "sg")
    {
        return SaveGame();
    }

    if(input == "mf" || input == "move forward")
    {
        //return mPlayer.Move("forward");
    }
    if(input == "mb" || input == "move backward")
    {
        //return mPlayer.Move("backward");
    }
    if(input == "mr" || input == "move right")
    {
        //return mPlayer.Move("right");
    }
    if(input == "ml" || input == "move left")
    {
        //return mPlayer.Move("left");
    }
    if(input == "ai" || input == "available items")
    {
        return mPlayer.ListAvailableItems();
    }
    if(input == "d" || input == "description")
    {
        //return mPlayer.GetFieldDescription();
    }
    if(input == "sp" || input == "savepoint") {
        return mPlayer.SetSavePoint();
    }
    if(input == "listSavePoints") {
        return mPlayer.ListAvailableSavePoints();
    }
    //Pick-up and Drop Items
    QStringList splittedInput = input.split(" ");

    if(splittedInput.length() == 2) // pick-up/drop only one item
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup") {
            return mPlayer.PickUpItemOfType(splittedInput[1]);
        }
        if(splittedInput[0] == "d" || splittedInput[0] == "drop") {
            return mPlayer.DropItemOfType(splittedInput[1]);
        }
    }

    if(splittedInput.length() == 3) // pick-up/drop multiple or all available items
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                return mPlayer.PickUpAllItemsOfType(splittedInput[1]);
            }
            else
            {
                return mPlayer.PickUpMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
            }
        }

        if(splittedInput[0] == "d" || splittedInput[0] == "drop")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                return mPlayer.DropAllItemsOfType(splittedInput[1]);
            }
            else
            {
                return mPlayer.DropMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
            }
        }
    }

    //flexible input lenght
    if(splittedInput[0] == "use") {
        QString itemName = input.remove(0, 4);
        if(mPlayer.HasItem(itemName) || mPlayer.CurrentField->HasItem(itemName)) {
            return Level_One.UseItem(mPlayer.CurrentField, itemName);
        }
        else
            return "Can't find item: " + itemName;
    }

    return("No fitting interpretation was found for: " + input + "\n      Please try something else.");
}
