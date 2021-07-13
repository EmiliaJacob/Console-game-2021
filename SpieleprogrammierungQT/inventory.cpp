#include "inventory.h"

Inventory::Inventory()
{

}

void Inventory::InsertOne(Item item) {
    CollectedItems.append(item);
}

void Inventory::DeleteOne(Item* item) {
   for(int i=0; i<CollectedItems.length(); i++) {
       if(CollectedItems[i].Name == item->Name) {
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

Item Inventory::GetItem(QString itemName)
{
    for(int i=0; i<CollectedItems.length(); i++) {
        if(CollectedItems[i].Name == itemName) {
            return CollectedItems[i];
        }
    }
}

QString Inventory::GetItemDescription(QString itemName)
{
    for(int i=0; i<CollectedItems.length(); i++) {
        if(CollectedItems[i].Name == itemName) {
            return CollectedItems[i].Description;
        }
    }
}

int Inventory::GetItemAmount(QString itemName)
{
    int amount = 0;
    for(int i=0; i<CollectedItems.length(); i++) {
        if(CollectedItems[i].Name == itemName) {
            amount += 1;
        }
    }
    return amount;
}
