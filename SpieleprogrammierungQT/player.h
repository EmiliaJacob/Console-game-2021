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
    void PickUpItems(QString itemType, int numberOfItems);
    void PickUpItemOfType(QString itemType);
    void PickUpMultipleItemsOfType(QString itemType, int numberOfItems);
    void PickUpAllItemsOfType(QString itemType);
    void DropItemOfType(QString itemName);
    void DropMultipleItemsOfType(QString itemType, int numberOfItems);
    void DropAllItemsOfType(QString itemType);
    void ListAvailableItems();
    void GetFieldDescription(); // TODO : rename -> you don't get anything
};

#endif // PLAYER_H
