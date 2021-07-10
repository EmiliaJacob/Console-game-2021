#ifndef ITEM_H
#define ITEM_H

#include <QJsonObject>
#include <QString>



class Item
{
public:
    Item();
    QString Name;
    QString Description;
    QString LocationDescription;
    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // ITEM_H
