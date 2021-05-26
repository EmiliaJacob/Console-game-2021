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
    //TODO: Current Field einlesen und setzen
}

void Player::Move(QString direction)
{
    if(direction == "forward"){
        if(Player::CurrentField->Forward != nullptr){
            Player::CurrentField = Player::CurrentField->Forward;
            qDebug() << "Moving Forward";
        }
    }
    else if(direction == "backward"){
        if(Player::CurrentField->Backward != nullptr){
            Player::CurrentField = Player::CurrentField->Backward;
            qDebug() << "Moving backward";
        }
    }
    else if(direction == "left"){
        if(Player::CurrentField->Left != nullptr){
            qDebug() << "Moving left";
            Player::CurrentField = Player::CurrentField->Left;
        }
        else{
            qWarning() << "No Field available";
        }
    }
    else if(direction == "right"){
        if(Player::CurrentField->Right != nullptr){
            qDebug() << "Moving right";
            Player::CurrentField = Player::CurrentField->Right;
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
            CurrentField->Items.removeAt(i);
        }
    }
    //Add Item to List in Inventory
}
