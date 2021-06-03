#include "game.h"
#include "gameboard.h"
#include "player.h"
#include "testhelper.h"
#include <QtDebug>
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

    CurrentField = Game::GameBoard.GetField(json["currentFieldId"].toString());
    qDebug() << "Created player and put them onto Field: " << CurrentField->Id;
}

void Player::Move(QString direction)
{
    if(direction == "forward"){
        if(QString::compare(CurrentField->FieldForward, "x") != 0)
        {
            CurrentField = Game::GameBoard.GetField(CurrentField->FieldForward);
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
            CurrentField = Game::GameBoard.GetField(CurrentField->FieldBackward);
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
    //Remove Item from List in Field
    for (int i=0; i<CurrentField->Items.size(); i++)
    {
        Item* item = &CurrentField->Items[i];
        if(QString::compare(item->Name, itemName, Qt::CaseSensitive) == 0)
        {
            Item pickedUpItem = CurrentField->Items[i];
;           CurrentField->Items.removeAt(i);
            mInventory.CollectedItems.append(pickedUpItem);
            qDebug() << "Picked up: " << pickedUpItem.Name;
            return;
        }
    }
    qDebug() << "Item " << itemName << " not found";
    //Add Item to List in Inventory
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
