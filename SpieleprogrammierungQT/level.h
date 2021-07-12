#ifndef LEVEL_H
#define LEVEL_H

#include <field.h>



class Level
{
private:
    QList<Field> mFields;
public:
    Level();
    Field* GetField(QString fieldId);
    void Combine(Item itemOne, Item itemTwo);
    QString UseItem(Field* CurrentField, QString itemName);
    void Read(const QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // LEVEL_H
