#ifndef INVENTORY_H
#define INVENTORY_H


#include "item.h"

class Inventory
{
private:
public:
    Inventory();
    void InsertOne(Item item);
    void DeleteOne(Item* item);
    bool HasItem(QString itemName);
    int GetItemAmount(QString itemName);
    Item GetItem(QString itemName);
    QList<Item> CollectedItems; // QList can be made private
};

#endif // INVENTORY_H
