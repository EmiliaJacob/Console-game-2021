#include "gamemanager.h"
#include "field.h"

#include <QFile>
#include <QJsonDocument>

GameManager::GameManager()
{

}

void GameManager::LoadGame(){
    QFile loadFile("save.json");

    if(!loadFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open save file");
        return;
    }

    QByteArray saveData = loadFile.readAll();

    QJsonDocument loadDoc(QJsonDocument::fromJson(saveData));

    qDebug() << loadDoc;

}
