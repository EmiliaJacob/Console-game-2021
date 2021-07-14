#ifndef FIELD_H
#define FIELD_H

#include "item.h"
#include "savepoint.h"

class Field
{
private:
public:
    QString Id;
    QString FieldRight, FieldLeft, FieldForward, FieldBackward; // Create ID with QUUid::createUuid().toString()
    QString Description;
    QList<Item> Items;
    bool IsDiscovered;
    SavePoint mSavePoint;
    bool HasSavePoint = false;

    Field();
    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
    bool HasItem(QString itemName);
};

#endif // FIELD_H
