#include "game.h"
#include "field.h"
#include "gameboard.h"

#include <QFile>
#include <QJsonDocument>

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
