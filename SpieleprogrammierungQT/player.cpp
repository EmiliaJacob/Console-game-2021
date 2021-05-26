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
