#ifndef INVENTORY_H
#define INVENTORY_H


#include "item.h"

class Inventory
{
private:
public:
    Inventory();

    QList<Item> CollectedItems;
};

#endif // INVENTORY_H
