#ifndef ITEM_H
#define ITEM_H

#include <QJsonObject>
#include <QString>



class Item
{
public:
    Item();
    QString Name;
    QString Description; // TODO : why is only the description private?
    QString LocationDescription;
    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // ITEM_H
