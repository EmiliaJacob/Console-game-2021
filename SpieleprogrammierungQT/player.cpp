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
        if(QString::compare(CurrentField->FieldForward, "x") != 0)
        {
            lastFieldId = CurrentField->Id;
            CurrentField = Game::Level_One.GetField(CurrentField->FieldForward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
            emit moved(lastFieldId, CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }

    if(direction == "backward"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            lastFieldId = CurrentField->Id;
            CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
            emit moved(lastFieldId, CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }

    if(direction == "left"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            lastFieldId = CurrentField->Id;
            CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
            emit moved(lastFieldId, CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
    }

    if(direction == "right"){
        if(QString::compare(CurrentField->FieldBackward, "x") != 0)
        {
            lastFieldId = CurrentField->Id;
            CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
            emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);
            emit moved(lastFieldId, CurrentField->Id);
        }
        else
        {
            emit issueConsoleOutput("Can't move into that direction");
        }
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


QString Player::PickUpItemOfType(QString itemType)
{
    for(int i = 0; i < CurrentField->Items.size(); i++)
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            emit issueConsoleOutput("Picked up " + itemType);
            emit pickedUpItems(itemType, 1);
            return("Picked up " + itemType);
        }
    }
    emit issueConsoleOutput("I can't find \"" + itemType + "\" on this field");
    return("I can't find \"" + itemType + "\" on this field");
}

QString Player::PickUpMultipleItemsOfType(QString itemType, int numberOfItems) {
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
                emit issueConsoleOutput("Picked up " + QString::number(numberOfItems) + " " + itemType);
                emit pickedUpItems(itemType, numberOfItems);
                return("Picked up " + QString::number(numberOfItems) + " " + itemType);
            }

            i = 0;
        }
        i += 1;
    }

    if(remainingItemsToPickUp > 0)
    {
        if(remainingItemsToPickUp == numberOfItems) {
            emit issueConsoleOutput("I can't find \"" + itemType + "\" on this field");
            return("I can't find \"" + itemType + "\" on this field");
        }
        else {
            emit issueConsoleOutput("The field doesn't contain as many items as you requested. I only found: "
                    + QString::number(numberOfItems - remainingItemsToPickUp)
                    + " " + itemType + "s");
            return("The field doesn't contain as many items as you requested. I only found: "
                    + QString::number(numberOfItems - remainingItemsToPickUp)
                    + " " + itemType + "s");
        }
    }
}

QString Player::PickUpAllItemsOfType(QString itemType)
{
    bool itemTypeAvailable = false;
    int i = 0;
    int numberOfItemsFound = 0;

    while (i != CurrentField->Items.size())
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            itemTypeAvailable = true;
            numberOfItemsFound += 1;
            i = 0;
        }
        i += 1;
    }



    if(itemTypeAvailable == false)
    {
        emit issueConsoleOutput("I can't find \"" + itemType + "\" on this field");
        return("I can't find \"" + itemType + "\" on this field");
    }
    else {
        emit issueConsoleOutput("Picked all available " + itemType);
        emit pickedUpItems(itemType, numberOfItemsFound);
        return("Picked up item");
    }
}


QString Player::DropItemOfType(QString itemType)
{
    for(int i=0; i<mInventory.CollectedItems.size(); i++)
    {
        Item item = mInventory.CollectedItems[i];
        if(item.Name == itemType) {
            mInventory.CollectedItems.removeAt(i);
            CurrentField->Items.append(item);
            emit issueConsoleOutput("Dropped item");
            emit droppedItems(itemType, 1);
            return("Dropped item");
        }
    }
    emit issueConsoleOutput("Item not found in inventory");
    return("Item not found in inventory");
}

QString Player::DropMultipleItemsOfType(QString itemType, int numberOfItems)
{
    int i = 0;
    int remainingItemsToDrop = numberOfItems;

    while (i != mInventory.CollectedItems.size())
    {
        if(mInventory.CollectedItems[i].Name == itemType)
        {
            CurrentField->Items.append(mInventory.CollectedItems[i]);
            mInventory.CollectedItems.removeAt(i);
            remainingItemsToDrop -= 1;

            if(remainingItemsToDrop == 0) {
                emit issueConsoleOutput("Dropped item");
                emit droppedItems(itemType, numberOfItems);
                return("Dropped item");
                break;
            }
            i = 0;
        }
        i += 1;
    }

    if(remainingItemsToDrop > 0)
    {
        emit issueConsoleOutput("Not enough items were available");
        return("Not enough items were available");
    }
}

QString Player::DropAllItemsOfType(QString itemType)
{
    bool itemTypeAvailable = false;
    int i = 0;
    int numberOfItemsDropped = 0;

    while (i != mInventory.CollectedItems.size())
    {
        if(mInventory.CollectedItems[i].Name == itemType)
        {
            CurrentField->Items.append(mInventory.CollectedItems[i]);
            mInventory.CollectedItems.removeAt(i);
            itemTypeAvailable = true;
            numberOfItemsDropped += 1;
            i = 0;
        }
        i += 1;
    }

    if(itemTypeAvailable == false)
    {
        emit issueConsoleOutput("ItemType is not available in inventory");
        return("ItemType is not available in inventory");
    }
    else {
        emit issueConsoleOutput("Dropped item");
        emit droppedItems(itemType, numberOfItemsDropped);
        return("Dropped item");
    }
}


QString Player::ListAvailableItemsOnField()
{
   if(Player::CurrentField->Items.length() == 0) {
       emit issueConsoleOutput("There are no items on this field");
       return("There are no items on this field");
   }
   else
   {
       QString answer;
       for(int i = 0; i<Player::CurrentField->Items.length(); i++)
       {
           answer.append("Found Item: " + Player::CurrentField->Items[i].Name + "\n");
       }
       emit issueConsoleOutput(answer);
       return answer;
   }
}

void Player::ListInventory()
{
    if(mInventory.CollectedItems.size() == 0) {
        qDebug() << "1";
        emit issueConsoleOutput("Inventory is empty\n");
    }
    else {
        qDebug() << "2";
        QString answer = "Inventory:\n";
        for(int i=0; i<mInventory.CollectedItems.size(); i++) {
            qDebug() << "3";
            Item item = mInventory.CollectedItems[i];
            answer.append("Collected Item: " + item.Name + "\n");
        }
        qDebug() << "4";
        emit issueConsoleOutput(answer);
    }
}

void Player::GetFieldDescription()
{
    emit issueConsoleOutput("Field Description: " + Player::CurrentField->Description);
}

void Player::SetSavePoint()
{
    if(CurrentField->HasSavePoint) {
        for(int i=0; i < unlockedSavePoints.length(); i++) {
            if(unlockedSavePoints[i].Name == CurrentField->mSavePoint.Name) {
                emit issueConsoleOutput("Savepoint is already set on this field");
                return;
            }
        }
        unlockedSavePoints.append(CurrentField->mSavePoint);
        emit issueConsoleOutput("Savepoint successfully set");
    }
    else
        emit issueConsoleOutput("The current field is not eligable to set a savepoint here");
}

void Player::ListAvailableSavePoints()
{
    if(unlockedSavePoints.length() == 0) {
        qDebug() << "No savepoints unlocked";
        emit issueConsoleOutput("You have no checkpoints unlocked yet");
    }
    else {
        qDebug() << "Found savepoints";

        QString answer;
        for(int i=0; i<unlockedSavePoints.length(); i++) {
            answer.append("Checkpoint: " + unlockedSavePoints[i].Name + "\n");
        }
        emit issueConsoleOutput(answer);
    }
}

void Player::FastTravel(QString destination)
{
    for(int i=0; i<unlockedSavePoints.length(); i++) { // Player entered FieldId
        if(unlockedSavePoints[i].fieldId == destination) {
            CurrentField = Game::Level_One.GetField(unlockedSavePoints[i].fieldId);
            emit issueConsoleOutput("Successfully fast-traveled to field: " + unlockedSavePoints[i].Name);
            return;
        }
    }
    for(int i=0; i<unlockedSavePoints.length(); i++) { // Player entered Name
        if(unlockedSavePoints[i].Name == destination) {
            CurrentField = Game::Level_One.GetField(unlockedSavePoints[i].fieldId);
            emit issueConsoleOutput("Successfully fast-traveled to field: " + unlockedSavePoints[i].Name);
        }
    }
}

void Player::CombineItems(QString items) // TODO: This is bad code
{
    QStringList splittedInput = items.split(' ');

    if(splittedInput.length() != 2) {
        emit issueConsoleOutput("Please specify TWO items");
        return;
    }

    Item* itemOne = nullptr;
    Item* itemTwo = nullptr;

    for(int i=0; i<mInventory.CollectedItems.length(); i++) {
        if(mInventory.CollectedItems[i].Name == splittedInput[0]) {
            itemOne = &mInventory.CollectedItems[i];
        }
        if(mInventory.CollectedItems[i].Name == splittedInput[1]) {
            itemTwo = &mInventory.CollectedItems[i];
        }
    }

    if(itemOne == nullptr || itemTwo == nullptr) {
        if(itemOne == nullptr  && itemTwo == nullptr ) {
            emit issueConsoleOutput("I can't find: " + splittedInput[0] + " and " + splittedInput[1] + " in the Inventory");
            return;
        }
        if(itemOne == nullptr) {
            emit issueConsoleOutput("I can't find: " + splittedInput[0] + " in the Inventory");
            return;
        }
        if(itemTwo == nullptr) {
            emit issueConsoleOutput("I can't find: " + splittedInput[1] + " in the Inventory");
            return;
        }
    }

    if((itemOne->Name == "Pogo" && itemTwo->Name == "Stick") || (itemOne->Name == "Stick" && itemTwo->Name == "Pogo")) {
        emit issueConsoleOutput("Combined items: 'Pogo' and 'Stick' to 'PogoStick'");
        mInventory.DeleteOne(*itemOne);
        mInventory.DeleteOne(*itemTwo);
        Item pogoStick;
        pogoStick.Name = "PogoStick";
        pogoStick.Description = "Bouncy thing used for jumping";
        pogoStick.LocationDescription = "Laying on the floor";
        mInventory.InsertOne(pogoStick);
    }
    else {
        emit issueConsoleOutput("I can't combine these two items");
    }
}

void Player::UseItem(QString itemName)
{
    QStringList splittedInput = itemName.split(' ');
    if (splittedInput.length() > 1) {
        emit issueConsoleOutput("I can only use one item at a time");
        return;
    }
    if(splittedInput.length() == 0) {
        emit issueConsoleOutput("Please specify the name of the item you want to use");
        return;
    }

    if(!mInventory.HasItem(itemName)) {
        emit issueConsoleOutput("The item: " + itemName + " cannot be found in the inventory");
        return;
    }

    if(itemName == "key") {
        if(CurrentField->Id == "2") {
            CurrentField->FieldForward = "3";
            emit issueConsoleOutput("You have sucessfully unlocked the way into direction: forward");
            return;
        }
    }

    emit issueConsoleOutput("I'm sorry this items seems to have no effect on this field.");
}
