#include "gameboard.h"
#include "testhelper.h"

#include <QJsonArray>

GameBoard::GameBoard()
{

}

void GameBoard::Read(const QJsonObject &json)
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

void GameBoard::Write(QJsonObject &json)
{
    QJsonArray fieldsArray;

    for(Field &field: this->mFields) // TODO: implement this elegant way into your other methods as well
    {
       QJsonObject fieldObject;
       field.Write(fieldObject);
       fieldsArray.append(fieldObject);
    }

    json["inventory"] = fieldsArray;
}

Field* GameBoard::GetField(QString fieldId)
{
    for(int i=0; i<mFields.size(); i++)
    {
        if(QString::compare(mFields[i].Id, fieldId, Qt::CaseSensitive) == 0)
        {
            return &mFields[i];
        }
    }
}
