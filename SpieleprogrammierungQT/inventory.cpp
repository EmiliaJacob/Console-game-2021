#include "inventory.h"

Inventory::Inventory()
{

}

void Inventory::InsertOne(Item item) {
    CollectedItems.append(item);
}

void Inventory::DeleteOne(Item item) {
   for(int i=0; i<CollectedItems.length(); i++) {
       if(CollectedItems[i].Name == item.Name) {
           CollectedItems.removeAt(i);
           break;
       }
   }
}

bool Inventory::HasItem(QString itemName)
{
    for(int i=0; i<CollectedItems.length(); i++) {
        if(CollectedItems[i].Name == itemName) {
            return true;
        }
    }

    return false;
}
