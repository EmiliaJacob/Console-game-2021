#include "level.h"
#include "testhelper.h"

#include <QJsonArray>

Level::Level()
{

}

void Level::Read(const QJsonObject &json)
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
            return &mFields[i];
        }
    }
}

void Level::Combine(Item itemOne, Item itemTwo)
{

}

QString Level::UseItem(Field* CurrentField, QString itemName)
{
    //Open Door with swipey thing in field two
    if (CurrentField->Id == "2")
    {
        if(itemName == "Swipey thing" ) {
            CurrentField->FieldForward = GetField("3")->Id;
            return "Sucessfully opened the door";
        }
    }
    return "I can't use this item here";
}
