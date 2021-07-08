#include "game.h"
#include "level.h"
#include "player.h"
#include "testhelper.h"
#include <QtDebug>
#include <item.h>
#include <item.h>

Player::Player()
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
        this->mInventory.CollectedItems.append(item);
    }

    QJsonArray unlockedSavePointsArray = json["unlockedSavePoints"].toArray();
    for(int j=0; j<unlockedSavePointsArray.size(); j++) {
        QJsonObject unlockedSavepointObject = unlockedSavePointsArray[j].toObject();
        SavePoint savePoint;
        savePoint.Read(unlockedSavepointObject);
        this->unlockedSavePoints.append(savePoint);
    }

    //TestHelper testHelper;
    //testHelper.PrintQList(Player::mInventory.CollectedItems);

    CurrentField = Game::Level_One.GetField(json["currentFieldId"].toString());
    qDebug() << "Created player and put them onto Field: " << CurrentField->Id;
}

void Player::Write(QJsonObject &json)
{
    json["name"] = Player::Name;
    json["currentFieldId"] = Player::CurrentField->Id;

    QJsonArray inventarArray;
    for(Item &item : this->mInventory.CollectedItems) {// TODO: implement this elegant way into your other methods as well
       QJsonObject itemObject;
       item.Write(itemObject);
       inventarArray.append(itemObject);
    }
    json["inventory"] = inventarArray;

    QJsonArray unlockedSavePointsArray;
    for(SavePoint &savePoint : this->unlockedSavePoints) {
        QJsonObject unlockedSavePointObject;
        savePoint.Write(unlockedSavePointObject);
        unlockedSavePointsArray.append(unlockedSavePointObject);
    }
    json["unlockedSavePoints"] = unlockedSavePointsArray;
}



void Player::Move(QString direction)
{
    if(direction == "forward"){
        qDebug() << "PLAYER_NAME: " + Player::Name;
        qDebug() << "Currentfield_ID: " + this->CurrentField->Id;

        if(QString::compare(CurrentField->FieldForward, "x") != 0)
        {
            qDebug() << "REACHED THE POINT";
            CurrentField = Game::Level_One.GetField(CurrentField->FieldForward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }

    if(direction == "backward"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }

    if(direction == "left"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }

    if(direction == "right"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }
}


QString Player::PickUpItemOfType(QString itemType) // Done!
{
    for(int i = 0; i < CurrentField->Items.size(); i++)
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            return("Picked up " + itemType);
        }
    }
    return("I can't find \"" + itemType + "\" on this field");
}

QString Player::PickUpMultipleItemsOfType(QString itemType, int numberOfItems) { // Done!
    int i = 0;
    int remainingItemsToPickUp = numberOfItems;

    while (i != CurrentField->Items.size())
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            remainingItemsToPickUp -= 1;

            if(remainingItemsToPickUp == 0) {
                return("Picked up " + QString::number(numberOfItems) + " " + itemType);
            }

            i = 0;
        }
        i += 1;
    }

    if(remainingItemsToPickUp > 0)
    {
        if(remainingItemsToPickUp == numberOfItems) {
            return("I can't find \"" + itemType + "\" on this field");
        }
        else {
            return("The field doesn't contain as many items as you requested. I only found: "
                    + QString::number(numberOfItems - remainingItemsToPickUp)
                    + " " + itemType + "s");
        }
    }
}

QString Player::PickUpAllItemsOfType(QString itemType) // Done!
{
    bool itemTypeAvailable = false;
    int i = 0;

    while (i != CurrentField->Items.size())
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            return("Picked up item");

            itemTypeAvailable = true;
            i = 0;
        }
        i += 1;
    }

    if(itemTypeAvailable == false)
    {
        return("I can't find \"" + itemType + "\" on this field");
    }
}

bool Player::HasItem(QString itemName)
{
    for (int i=0; i<mInventory.CollectedItems.size(); i++) {
        Item item = mInventory.CollectedItems[i];
        if(item.Name == itemName) {
            return true;
        }
    }
    return false;
}

QString Player::DropItemOfType(QString itemType) // Done!
{
    for(int i=0; i<mInventory.CollectedItems.size(); i++)
    {
        Item item = mInventory.CollectedItems[i];
        if(item.Name == itemType) {
            mInventory.CollectedItems.removeAt(i);
            CurrentField->Items.append(item);
            return("Dropped item");
        }
    }
    return("Item not found in inventory");
}

QString Player::DropMultipleItemsOfType(QString itemType, int numberOfItems) // Done!
{
    int i = 0;
    while (i != mInventory.CollectedItems.size())
    {
        if(mInventory.CollectedItems[i].Name == itemType)
        {
            CurrentField->Items.append(mInventory.CollectedItems[i]);
            mInventory.CollectedItems.removeAt(i);
            numberOfItems -= 1;
            return("Dropped item");
            if(numberOfItems == 0) {
                break;
            }
            i = 0;
        }
        i += 1;
    }

    if(numberOfItems > 0)
    {
        return("Not enough items were available");
    }
}

QString Player::DropAllItemsOfType(QString itemType) // Done!
{
    bool itemTypeAvailable = false;
    int i = 0;

    while (i != mInventory.CollectedItems.size())
    {
        if(mInventory.CollectedItems[i].Name == itemType)
        {
            CurrentField->Items.append(mInventory.CollectedItems[i]);
            mInventory.CollectedItems.removeAt(i);
            return("Dropped item");
            itemTypeAvailable = true;
            i = 0;
        }
        i += 1;
    }

    if(itemTypeAvailable == false)
    {
        return("ItemType is not available in inventory");
    }
}


QString Player::ListAvailableItems() // Done!
{
   if(Player::CurrentField->Items.length() == 0)
       return("There are no items on this field");
   else
   {
       QString answer;
       for(int i = 0; i<Player::CurrentField->Items.length(); i++)
       {
           answer.append("Found Item: " + Player::CurrentField->Items[i].Name + "\n");
       }
       return answer;
   }
}

void Player::GetFieldDescription() // Done!
{
    emit issueConsoleOutput("Field Description: " + Player::CurrentField->Description);
}

QString Player::SetSavePoint()
{
    if(CurrentField->HasSavePoint) {
        unlockedSavePoints.append(CurrentField->mSavePoint);
        return "Savepoint successfully set";
    }
    else
        return "The current field is not eligable to set a savepoint here";
}

QString Player::ListAvailableSavePoints()
{
    if(unlockedSavePoints.length() == 0) {
        return("You have not checkpoints unlocked");
    }
    else {
        QString answer;
        for(int i=0; i<unlockedSavePoints.length(); i++) {
            answer.append("Checkpoint: " + unlockedSavePoints[i].Name);
        }
        return answer;
    }
}
