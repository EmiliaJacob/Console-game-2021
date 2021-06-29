#include "game.h"
#include "gameboard.h"
#include "player.h"
#include "testhelper.h"
#include <QtDebug>
#include <item.h>
#include <item.h>
//#include <QtWarning>

Player::Player()
{

}

void Player::Write(QJsonObject &json)
{

}

void Player::Read(const QJsonObject &json)
{
    Player::Name = json["name"].toString();
    QJsonArray itemArray = json["inventory"].toArray();
    for(int i=0; i<itemArray.size(); i++)
    {
        QJsonObject itemObject = itemArray[i].toObject();
        Item item;
        item.Read(itemObject);
        Player::mInventory.CollectedItems.append(item);
    }
    TestHelper testHelper;
    testHelper.PrintQList(Player::mInventory.CollectedItems);

    CurrentField = Game::mGameBoard.GetField(json["currentFieldId"].toString());
    qDebug() << "Created player and put them onto Field: " << CurrentField->Id;
}

void Player::Move(QString direction)
{
    if(direction == "forward"){
        if(QString::compare(CurrentField->FieldForward, "x") != 0)
        {
            CurrentField = Game::mGameBoard.GetField(CurrentField->FieldForward);
            qDebug() << "Moved Forward to field " << CurrentField->Id;
        }
        else
        {
            qDebug() << "Can't move into that direction";
        }
    }

    if(direction == "backward"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            CurrentField = Game::mGameBoard.GetField(CurrentField->FieldBackward);
            qDebug() << "Moved Backward to field " << CurrentField->Id;
        }
        else
        {
            qDebug() << "Can't move into that direction";
        }
    }
}

void Player::PickUpItems(QString itemName, int numberOfItems) // TODO: make it possible to pick up multiple items
{
    for (int i=0; i<CurrentField->Items.size(); i++)
    {
        Item item = CurrentField->Items[i];
        if(item.Name == itemName)
        {
            CurrentField->Items.removeAt(i);
            mInventory.CollectedItems.append(item);
            qDebug() << "Picked up: " << item.Name;
            return;
        }
    }
    qDebug() << "Item " << itemName << " not found";
}

void Player::DropItemOfType(QString itemType)
{
    for(int i=0; i<mInventory.CollectedItems.size(); i++)
    {
        Item item = mInventory.CollectedItems[i]; //TODO : Muss item wieder zerstört werden?
        if(item.Name == itemType)
        {
            mInventory.CollectedItems.removeAt(i);
            CurrentField->Items.append(item);
            qDebug() << "Dropped item: " << item.Name;
            return;
        }
    }
    qDebug() << "Item " << itemType << " was not found in inventory";
}

void Player::DropAllItemsOfType(QString itemType)
{
    QList<Item>::iterator i;
    for(i=mInventory.CollectedItems.begin(); i != mInventory.CollectedItems.end(); i++)
    {
        ////qDebug() << "Loop counter at: " << i;
        //qDebug() << "Invetory size: " << mInventory.CollectedItems.size();
        //Item item = mInventory.CollectedItems[i]; //TODO : Muss item wieder zerstört werden?
        //if(item.Name == itemType)
        //{
        //    mInventory.CollectedItems.remove(i);
        //    CurrentField->Items.append(item);
        //    qDebug() << "Dropped item: " << item.Name;
        //}
    }
}

void Player::DropMultipleItemsOfType(QString itemType, int numberOfItems)
{
    for(int i=0; i<mInventory.CollectedItems.size(); i++)
    {
        Item item = mInventory.CollectedItems[i]; //TODO : Muss item wieder zerstört werden?
        if(item.Name == itemType)
        {
            mInventory.CollectedItems.removeAt(i);
            CurrentField->Items.append(item);
            qDebug() << "Dropped item: " << item.Name;
            numberOfItems -= 1;
            if(numberOfItems == 0)
                return;
        }
    }
    qDebug() << "Item " << itemType << " was not found in inventory";
}

void Player::ListAvailableItems()
{
   if(Player::CurrentField->Items.length() == 0)
       qDebug() << "There are no items on this field";
   else
   {
       for(int i = 0; i<Player::CurrentField->Items.length(); i++)
       {
           qDebug() << "Found Item: " << Player::CurrentField->Items[i].Name;
       }
   }
}

void Player::GetFieldDescription()
{
    qDebug() << "Field Description: " << Player::CurrentField->Description;

}
