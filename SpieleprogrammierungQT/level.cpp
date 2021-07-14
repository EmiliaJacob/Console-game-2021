#include "level.h"
#include "testhelper.h"

#include <QJsonArray>

Level::Level()
{

}

void Level::Read(const QJsonObject &json)
{
    QJsonArray fieldArray = json["fields"].toArray();
    mFields.clear();

    for(int i=0; i<fieldArray.size(); i++)
    {
        QJsonObject fieldObject = fieldArray[i].toObject();
        Field field;
        field.Read(fieldObject);
        mFields.append(field);
    }
    TestHelper testHelper;
}

void Level::Write(QJsonObject &json)
{
    QJsonArray fieldsArray;

    for(Field &field: this->mFields) // TODO: implement this elegant way into your other methods as well
    {
       QJsonObject fieldObject;
       field.Write(fieldObject);
       fieldsArray.append(fieldObject);
    }

    json["fields"] = fieldsArray;
}

Field* Level::GetField(QString fieldId)
{
    for(int i=0; i<mFields.size(); i++)
    {
        if(QString::compare(mFields[i].Id, fieldId, Qt::CaseSensitive) == 0)
        {
            qDebug() << "FIELD__ID: " + fieldId;
            return &mFields[i];
        }
    }
}

void Level::ExecuteFieldEvent(QString fieldId)
{
    qDebug() << "EXUCTION: " + fieldId;

    if(fieldId == "3") {
        emit issueConsoleOutput("Oh no!\n   The door closed behind us.\n   We have to find an alternative path now.");
    }
    if(fieldId == "6") {
        emit playerDiesRequest();
    }
    if(fieldId == "13") {
        emit issueConsoleOutput("Thank you for playing our Demo.");
    }
}

QString Level::UseItem(Field* CurrentField, QString itemName)
{
    //Open Door with swipey thing in field two
    if (CurrentField->Id == "2")
    {
        if(itemName == "Swipey thing" ) {
            CurrentField->FieldUp = GetField("3")->Id;
            return "Sucessfully opened the door";
        }
    }
    return "I can't use this item here";
}
