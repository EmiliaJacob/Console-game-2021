#ifndef ITEM_H
#define ITEM_H

#include <QJsonObject>
#include <QString>



class Item
{
private:
    QString mDescription; // TODO : why is only the description private?
public:
    Item();
    QString Name;

    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // ITEM_H
