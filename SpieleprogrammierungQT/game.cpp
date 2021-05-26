#include "game.h"
#include "field.h"

#include <QFile>
#include <QJsonDocument>

Game::Game()
{

}

void Game::LoadGame(){
    // Loading Player - Data
    QFile playerFile("player.json");
    if(!playerFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open save file");
        return;
    }

    QByteArray playerData = playerFile.readAll();
    QJsonDocument playerDoc(QJsonDocument::fromJson(playerData));

    Player.Read(playerDoc.object());
    // TODO: Set Player's current field

    //Loading Fields
    QFile fieldsFile("fields.json");
    if(!fieldsFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open fields - file");
        return;
    }

    QByteArray fieldsData = fieldsFile.readAll();
    QJsonDocument fieldsDoc(QJsonDocument::fromJson(fieldsData));
    QJsonArray fieldsArray = fieldsDoc.object()["fields"].toArray();

    // TODO: read the fields with their ids in first and then link them afterwards by their IDs

}
