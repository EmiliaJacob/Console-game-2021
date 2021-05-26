#include "gameboard.h"
#include "testhelper.h"

#include <QJsonArray>

GameBoard::GameBoard()
{

}

void GameBoard::Read(QJsonObject &json)
{
    QJsonArray fieldArray = json["fields"].toArray();
    for(int i=0; i<fieldArray.size(); i++)
    {
        QJsonObject fieldObject = fieldArray[i].toObject();
        Field field;
        field.Read(fieldObject);
        mFields.append(field);
    }
    TestHelper testHelper;
}
