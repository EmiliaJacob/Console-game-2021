#include "game.h"
#include "level.h"
#include "player.h"
#include "testhelper.h"
#include <QtDebug>
#include <item.h>
#include <item.h>

Player::Player()
{
    lastSavePoint = "The entry of the caves";
}


void Player::Read(const QJsonObject &json)
{
    Player::Name = json["name"].toString();

    QJsonArray itemArray = json["inventory"].toArray();
    this->mInventory.CollectedItems.clear();

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


void Player::Move(QString direction) // TODO: refactor make it smaller
{
    if(direction == "forward"){
        if(CurrentField->FieldForward == "x") {
            emit issueConsoleOutput("It is impossible to move into this direction.");
            return;
        }
        if(CurrentField->FieldForward == "b") {
            emit issueConsoleOutput("This direction is blocked.\n   There might be some way to free this way.");
            return;
        }

        lastFieldId = CurrentField->Id;
        CurrentField = Game::Level_One.GetField(CurrentField->FieldForward);
        emit issueConsoleOutput("Moved forward to field with id: " + CurrentField->Id);

        Game::Level_One.ExecuteFieldEvent(CurrentField->Id);

        emit moved(lastFieldId, CurrentField->Id);
        GetFieldDescription();
    }

    if(direction == "backward"){
        if(CurrentField->FieldBackward == "x") {
            emit issueConsoleOutput("It is impossible to move into this direction.");
            return;
        }
        if(CurrentField->FieldBackward == "b") {
            emit issueConsoleOutput("This direction is blocked.\n   There might be some way to free this way.");
            return;
        }

        lastFieldId = CurrentField->Id;
        CurrentField = Game::Level_One.GetField(CurrentField->FieldBackward);
        emit issueConsoleOutput("Moved backward to field with id: " + CurrentField->Id);

        Game::Level_One.ExecuteFieldEvent(CurrentField->Id);

        emit moved(lastFieldId, CurrentField->Id);
        GetFieldDescription();
    }

    if(direction == "left"){
        if(CurrentField->FieldLeft== "x") {
            emit issueConsoleOutput("It is impossible to move into this direction.");
            return;
        }
        if(CurrentField->FieldLeft == "b") {
            emit issueConsoleOutput("This direction is blocked.\n   There might be some way to free this way.");
            return;
        }

        lastFieldId = CurrentField->Id;
        CurrentField = Game::Level_One.GetField(CurrentField->FieldLeft);
        emit issueConsoleOutput("Moved left to field with id: " + CurrentField->Id);

        Game::Level_One.ExecuteFieldEvent(CurrentField->Id);

        emit moved(lastFieldId, CurrentField->Id);
        GetFieldDescription();
    }

    if(direction == "right"){
        if(CurrentField->FieldRight == "x") {
            emit issueConsoleOutput("It is impossible to move into this direction.");
            return;
        }
        if(CurrentField->FieldRight == "b") {
            emit issueConsoleOutput("This direction is blocked.\n   There might be some way to free this way.");
            return;
        }

        lastFieldId = CurrentField->Id;
        CurrentField = Game::Level_One.GetField(CurrentField->FieldRight);
        emit issueConsoleOutput("Moved right to field with id: " + CurrentField->Id);

        Game::Level_One.ExecuteFieldEvent(CurrentField->Id);

        emit moved(lastFieldId, CurrentField->Id);
        GetFieldDescription();
    }
}

void Player::Die()
{
    emit issueConsoleOutput("You fell victim to a deadly trap.\n   You will respawn at your last save-point");
    this->FastTravel(lastSavePoint);
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
            emit pickedUpItems(itemType, &mInventory);
            PrintItemDescription(itemType);
            return("Picked up " + itemType);
        }
    }
    emit issueConsoleOutput("I can't find \"" + itemType + "\" on this field");
    return("I can't find \"" + itemType + "\" on this field");
}

QString Player::PickUpMultipleItemsOfType(QString itemType, int numberOfItems) {
    int i = 0;
    int remainingItemsToPickUp = numberOfItems;

    qDebug() << "THREE";

    while (i != CurrentField->Items.size())
    {
        if(CurrentField->Items[i].Name == itemType)
        {
            mInventory.CollectedItems.append(CurrentField->Items[i]);
            CurrentField->Items.removeAt(i);
            remainingItemsToPickUp -= 1;

            if(remainingItemsToPickUp == 0) {
                emit issueConsoleOutput("Picked up " + QString::number(numberOfItems) + " " + itemType);
                emit pickedUpItems(itemType, &mInventory);
                PrintItemDescription(itemType);
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
            PrintItemDescription(itemType);

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
        emit pickedUpItems(itemType, &mInventory);
        PrintItemDescription(itemType);
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
            emit droppedItems(itemType, &mInventory);
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
                emit droppedItems(itemType, &mInventory);
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
        emit droppedItems(itemType, &mInventory);
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
       QString answer = "Found following items:\n";
       QString* spacerLeft = new QString(5, ' ');

       for(int i = 0; i<Player::CurrentField->Items.length(); i++)
       {
           if(i == Player::CurrentField->Items.length() - 1)
               answer.append(*spacerLeft + "• " + Player::CurrentField->Items[i].Name);
           else
               answer.append(*spacerLeft + "• " + Player::CurrentField->Items[i].Name + "\n");
       }

       delete spacerLeft;
       emit issueConsoleOutput(answer);
       return answer;
   }
}

void Player::ListInventory()
{
    if(mInventory.CollectedItems.size() == 0) {
        emit issueConsoleOutput("Inventory is empty\n");
    }
    else {
        QString answer = "Inventory:\n";
        QString* spacerLeft = new QString(5, ' ');

        for(int i=0; i<mInventory.CollectedItems.size(); i++) {
            Item item = mInventory.CollectedItems[i];

            if(i == mInventory.CollectedItems.size() - 1)
                answer.append(*spacerLeft + "• " + item.Name);
            else
                answer.append(*spacerLeft + "• " + item.Name + "\n");
        }

        delete spacerLeft;
        emit issueConsoleOutput(answer);
    }
}

void Player::GetFieldDescription()
{
    emit issueConsoleOutput("Field Description: \n" + Player::CurrentField->Description);
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
        lastSavePoint = CurrentField->mSavePoint.Name;
    }
    else
        emit issueConsoleOutput("The current field is not eligable to set a savepoint here");
}

void Player::ListAvailableSavePoints()
{
    if(unlockedSavePoints.length() == 0) {
        emit issueConsoleOutput("You have no checkpoints unlocked yet");
    }
    else {
        QString answer = "Unlocked savepoints: \n";
        QString* spacerLeft = new QString(5, ' ');

        for(int i=0; i<unlockedSavePoints.length(); i++) {
            if(i == unlockedSavePoints.length() - 1)
                answer.append(*spacerLeft + "• " + unlockedSavePoints[i].Name);
            else
                answer.append(*spacerLeft + "• " + unlockedSavePoints[i].Name + "\n");
        }

        delete  spacerLeft;
        emit issueConsoleOutput(answer);
    }
}

void Player::FastTravel(QString destination)
{
    for(int i=0; i<unlockedSavePoints.length(); i++) { // Player entered FieldId
        if(unlockedSavePoints[i].fieldId == destination) {
            CurrentField = Game::Level_One.GetField(unlockedSavePoints[i].fieldId);
            lastSavePoint = unlockedSavePoints[i].Name;
            emit issueConsoleOutput("Successfully fast-traveled to field: " + unlockedSavePoints[i].Name);
            return;
        }
    }
    for(int i=0; i<unlockedSavePoints.length(); i++) { // Player entered Name
        if(unlockedSavePoints[i].Name == destination) {
            CurrentField = Game::Level_One.GetField(unlockedSavePoints[i].fieldId);
            lastSavePoint = unlockedSavePoints[i].Name;
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

    for(int i=0; i<mInventory.CollectedItems.length(); i++) { // TODO: remove for loops with function-call to 'HasItem'
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

    if((itemOne->Name == "key_segment_A" && itemTwo->Name == "key_segment_B") || (itemOne->Name == "key_segment_B" && itemTwo->Name == "key_segment_A")) {
        emit issueConsoleOutput("Combined items: 'key_segment_B' and 'key_segment_A' to 'key_B'");

        mInventory.DeleteOne(itemOne);

        for(int i=0; i<mInventory.CollectedItems.length(); i++) { // Had to reassing the pointer here, because the array is changed in the first 'DeleteOne()'
            if(mInventory.CollectedItems[i].Name == splittedInput[1]) {
                itemTwo = &mInventory.CollectedItems[i];
            }
        }

        mInventory.DeleteOne(itemTwo);

        Item key;
        key.Name = "key_B";
        key.Description = "The key used to be sawed in half. I'm glad that I could reassemble it.";
        mInventory.InsertOne(key);
    }
    else {
        emit issueConsoleOutput("I can't combine these two items");
    }
}

void Player::UseItem(QString itemName)
{
    qDebug() << "Playername " + Name;
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

    if(itemName == "key_A") {
        if(CurrentField->Id == "2") {
            CurrentField->FieldForward = "5";
            emit issueConsoleOutput("You have sucessfully unlocked the way into direction: forward");
            return;
        }
    }

    if(itemName == "key_B") {
        if(CurrentField->Id == "10") {
            CurrentField->FieldForward = "13";
            emit issueConsoleOutput("You have sucessfully unlocked the way into direction: forward");
            return;
        }
    }

    if(itemName == "passcode_A") {
        if(CurrentField->Id == "5") {
            CurrentField->FieldForward = "7";
            emit issueConsoleOutput("You have sucessfully unlocked the way into direction: forward");
            return;
        }
    }

    if(itemName == "passcode_B") {
        if(CurrentField->Id == "10") {
            CurrentField->FieldRight = "14";
            emit issueConsoleOutput("You have sucessfully unlocked the way into direction: right");
            return;
        }
    }

    if(itemName == "pickaxe") {
        if(CurrentField->Id == "4") {
            CurrentField->FieldLeft = "1";
            emit issueConsoleOutput("The wall broke. You have sucessfully unlocked the way into direction: left");
            return;
        }
    }
    emit issueConsoleOutput("I'm sorry this items seems to have no effect on this field.");
}

void Player::PrintItemDescription(QString itemName)
{
    if(! mInventory.HasItem(itemName)) {
        emit issueConsoleOutput("Item cannot be found in Inventory");
        return;
    }

    QString itemDescription = mInventory.GetItem(itemName).Description;

    emit issueConsoleOutput("Description: " + itemDescription);
}
