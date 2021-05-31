#ifndef PLAYER_H
#define PLAYER_H
#include "field.h"
#include "inventory.h"
#include <QJsonArray>
#include <QString>
#include <iostream>

class Player
{
private:
    Inventory mInventory;
public:
    QString Name;
    Field* CurrentField;
    Player();
    void Read(const QJsonObject &json);
    void Write(QJsonObject &json);
    void Move(QString direction);
    void PickUpItems(QString itemName, int numberOfItems);
};

#endif // PLAYER_H
