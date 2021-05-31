#ifndef ITEM_H
#define ITEM_H

#include <QJsonObject>
#include <QString>



class Item
{
private:
    QString mDescription;
public:
    Item();
    QString Name;

    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // ITEM_H
