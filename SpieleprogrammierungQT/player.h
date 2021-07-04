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
    Field* LastField;

public:
    QString Name;
    Field* CurrentField;
    Player();
    void Read(const QJsonObject &json);
    void Write(QJsonObject &json);
    QString Move(QString direction);
    QString PickUpItems(QString itemType, int numberOfItems);
    QString PickUpItemOfType(QString itemType);
    QString PickUpMultipleItemsOfType(QString itemType, int numberOfItems);
    QString PickUpAllItemsOfType(QString itemType);
    QString DropItemOfType(QString itemName);
    QString DropMultipleItemsOfType(QString itemType, int numberOfItems);
    QString DropAllItemsOfType(QString itemType);
    QString ListAvailableItems();
    QString GetFieldDescription(); // TODO : rename -> you don't get anything
};

#endif // PLAYER_H
