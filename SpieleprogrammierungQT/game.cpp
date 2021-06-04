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

void Game::LoadGame()
{
    //Loading Fields
    QFile fieldsFile("fields.json");
    if(!fieldsFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open fields - file");
        return;
    }

    QByteArray fieldsData = fieldsFile.readAll();
    QJsonDocument fieldsDoc(QJsonDocument::fromJson(fieldsData));

    GameBoard.Read(fieldsDoc.object());

    // Loading Player
    QFile playerFile("player.json");
    if(!playerFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open save file");
        return;
    }

    QByteArray playerData = playerFile.readAll();
    QJsonDocument playerDoc(QJsonDocument::fromJson(playerData));

    Player.Read(playerDoc.object());
}

void Game::InputHandler(QString input)
{
    if(input == "mf")
    {
        Player.Move("forward");
        return;
    }
    if(input == "mb")
    {
        Player.Move("backward");
        return;
    }
    if(input == "mr")
    {
        Player.Move("right");
        return;
    }
    if(input == "ml")
    {
        Player.Move("left");
        return;
    }
    if(input == "i")
    {
        Player.ListAvailableItems();
        return;
    }
    if(input == "d")
    {
        Player.GetFieldDescription();
        return; //TODO: return are unneccessary
    }
    if(input.split(" ")[0] == "p")
    {
        Player.PickUpItems(input.split(" ")[1], 1);
        return;
    }
    if(input.split(" ")[0] == "d")
    {
        QStringList splittedInput = input.split(" ");
        if(splittedInput.size()==2)
            Player.DropItemOfType(splittedInput[1]);
        else
        {
            if(splittedInput[2] == "a")
                Player.DropAllItemsOfType(splittedInput[1]);
            else
                Player.DropMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
        }
        return;
    }
}
