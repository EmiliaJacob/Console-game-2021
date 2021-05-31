#ifndef FIELD_H
#define FIELD_H

#include "item.h"

class Field
{
private:
public:
    QString Id;
    QString FieldRight, FieldLeft, FieldForward, FieldBackward; // Create ID with QUUid::createUuid().toString()
    QString Description;
    QList<Item> Items;

    Field();
    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // FIELD_H
