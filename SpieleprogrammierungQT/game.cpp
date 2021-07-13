#include "game.h"
#include "field.h"
#include "level.h"

#include <QFile>
#include <QJsonDocument>
#include <QDebug>
#include <QString>
#include <QDateTimeEdit>

Game::Game()
{
  // currentState = &States::idleState; // TODO: Move into own function
}

void Game::NewGame(QString playerName)
{
    QFile fieldsFile("fields_blueprint.json"); // TODO: can be refactored into a private method
    if(!fieldsFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open fields - file");
        return;
    }

    QByteArray fieldsData = fieldsFile.readAll();
    QJsonDocument fieldsDoc(QJsonDocument::fromJson(fieldsData));

    Level_One.Read(fieldsDoc.object());




    QFile playerFile("player_blueprint.json");
    if(!playerFile.open(QIODevice::ReadOnly)){
        qWarning("Can't open save file");
        return;
    }

    QByteArray playerData = playerFile.readAll();
    QJsonDocument playerDoc(QJsonDocument::fromJson(playerData));

    mPlayer.Read(playerDoc.object());
    mPlayer.Name = playerName;




    emit issueConsoleOutput("New Game was successfully created");

    ChangeState("idleState");
}

void Game::ListSavePoints()
{
    QFile savepointsFile(QStringLiteral("savepoints.json"));

    if(!savepointsFile.open(QIODevice::ReadWrite)) {
        qDebug() << "Couldn't open savepoints file";
        emit issueConsoleOutput("Couldn't find a savepoints file");
    }
    else {
        QByteArray savepointsData = savepointsFile.readAll();
        QJsonDocument savepointsDoc(QJsonDocument::fromJson(savepointsData));
        QJsonObject savepointsObject = savepointsDoc.object();
        QJsonArray savepointsArray = savepointsObject["savepoints"].toArray();

        QString answer;

        if(savepointsArray.size() == 0) {
            answer = "You haven't set any savepoints yet";
        }
        else {
            for(int i=0; i<savepointsArray.size(); i++) {
                if(i == 0)
                    answer.append(QString::number(i) + ":   " + savepointsArray.at(i)["dateTime"].toString() + "\n");
                else if(i == savepointsArray.size()-1)
                    answer.append("   " + QString::number(i) + ":   " + savepointsArray.at(i)["dateTime"].toString());
                else
                    answer.append("   " + QString::number(i) + ":   " + savepointsArray.at(i)["dateTime"].toString() + "\n");
            }
        }

        emit issueConsoleOutput(answer);
    }
}

bool Game::LoadGame(int savepointIndex)
{
    QFile savepointsFile(QStringLiteral("savepoints.json"));

    if(!savepointsFile.open(QIODevice::ReadWrite)) {
        qDebug() << "Couldn't open savepoints file";
        emit issueConsoleOutput("Couldn't find a savepoints file");
    }
    else {
        QByteArray savepointsData = savepointsFile.readAll();
        QJsonDocument savepointsDoc(QJsonDocument::fromJson(savepointsData));
        QJsonObject savepointsObject = savepointsDoc.object();
        QJsonArray savepointsArray = savepointsObject["savepoints"].toArray();

        if(savepointIndex < 0 || savepointIndex > savepointsArray.size() - 1) {
            emit issueConsoleOutput("Please enter a number that is in the specified range");
            return false;
        }

        QString fieldsFileName = "fields_" +
                savepointsArray.at(savepointIndex)["dateTime"].toString()
                .remove(QChar(':'), Qt::CaseInsensitive)
                .replace(QChar(' '), QChar('_'),Qt::CaseInsensitive)
                + ".json";

        QString playerFileName = "player_" +
                savepointsArray.at(savepointIndex)["dateTime"].toString()
                .remove(QChar(':'), Qt::CaseInsensitive)
                .replace(QChar(' '), QChar('_'),Qt::CaseInsensitive)
                + ".json";

        //Loading Fields
        QFile fieldsFile(fieldsFileName);
        if(!fieldsFile.open(QIODevice::ReadOnly)){
            qWarning("Can't open fields - file");
            return false;
        }

        QByteArray fieldsData = fieldsFile.readAll();
        QJsonDocument fieldsDoc(QJsonDocument::fromJson(fieldsData));

        Level_One.Read(fieldsDoc.object());

        // Loading Player

        QFile playerFile(playerFileName);
        if(!playerFile.open(QIODevice::ReadOnly)){
            qWarning("Can't open save file");
            return false;
        }

        QByteArray playerData = playerFile.readAll();
        QJsonDocument playerDoc(QJsonDocument::fromJson(playerData));

        mPlayer.Read(playerDoc.object());

        emit issueConsoleOutput("Savepoint was successfully loaded");

        ChangeState("idleState");
        return true;
    }
}

void Game::HandleCommand(QString command)
{
    currentState->ExecuteCommand(command);
    currentState->PrintMenu();
}


void Game::ChangeState(QString stateName)
{
    if(stateName == "idleState") {
        currentState = &States::idleState;
    }
    else if(stateName == "pickUpState") {
        currentState = &States::pickUpState;
    }
    else if(stateName == "dropState") {
        currentState = &States::dropState;
    }
    else if(stateName == "fastTravelState") {
        currentState = &States::fastTravelState;
    }
    else if(stateName == "combineItemsState") {
        currentState = &States::combineItemsState;
    }
    else if(stateName == "useItemState") {
        currentState = &States::useItemState;
    }
    else if(stateName == "saveGameState") {
        currentState = &States::saveGameState;
    }
    else if(stateName == "loadGameState") {
        currentState = &States::loadGameState;
    }
    else if(stateName == "newGameState") {
        currentState = &States::newGameState;
    }
    else if(stateName == "initialLoadGameState") {
        currentState = &States::initialLoadGameState;
    }
}

void Game::SaveGame()
{
    //
    QDateTime dateTime = QDateTime::fromSecsSinceEpoch(QDateTime::currentSecsSinceEpoch());
    qDebug() << dateTime;

    QFile savepointsFile(QStringLiteral("savepoints.json"));

    if(!savepointsFile.open(QIODevice::ReadWrite)) {
        qDebug() << "Couldn't open savepoints file";
    }
    else {
        QByteArray savepointsData = savepointsFile.readAll();
        QJsonDocument savepointsDoc(QJsonDocument::fromJson(savepointsData));
        QJsonObject savepointsObject = savepointsDoc.object();
        QJsonArray savepointsArray = savepointsObject["savepoints"].toArray();
        savepointsFile.resize(0);

        QJsonObject newSavepoint;
        newSavepoint["dateTime"] = dateTime.toString();

        savepointsArray.append(newSavepoint);
        savepointsObject["savepoints"] = savepointsArray;

        savepointsFile.write(QJsonDocument(savepointsObject).toJson());
    }
    //

    QString playerFileName = "player_" +
            dateTime.toString()
            .remove(QChar(':'), Qt::CaseInsensitive)
            .replace(QChar(' '), QChar('_'),Qt::CaseInsensitive)
            + ".json";

    QFile playerFile(playerFileName);

    if(!playerFile.open(QIODevice::WriteOnly))
    {
        qDebug() << "Couldn't open playerFile";
    }
    else
    {
        QJsonObject playerObject;
        mPlayer.Write(playerObject);

        playerFile.write(QJsonDocument(playerObject).toJson());
    }

    QString fieldsFileName = "fields_" +
            dateTime.toString()
            .remove(QChar(':'), Qt::CaseInsensitive)
            .replace(QChar(' '), QChar('_'),Qt::CaseInsensitive)
            + ".json";

    QFile fieldsFile(fieldsFileName);

    if(!fieldsFile.open((QIODevice::WriteOnly)))
    {
        qDebug() << "Couldn't open fieldsFile";
        return;
    }
    else
    {
        QJsonObject gameBoardObject;
        Level_One.Write(gameBoardObject);

        fieldsFile.write(QJsonDocument(gameBoardObject).toJson());
    }

    emit issueConsoleOutput("Game sucessfully saved");
}

QString Game::InputHandler(QString input)
{
    if(input == "sg")
    {
        //return SaveGame();
    }

    if(input == "mf" || input == "move forward")
    {
        //return mPlayer.Move("forward");
    }
    if(input == "mb" || input == "move backward")
    {
        //return mPlayer.Move("backward");
    }
    if(input == "mr" || input == "move right")
    {
        //return mPlayer.Move("right");
    }
    if(input == "ml" || input == "move left")
    {
        //return mPlayer.Move("left");
    }
    if(input == "ai" || input == "available items")
    {
        return mPlayer.ListAvailableItemsOnField();
    }
    if(input == "d" || input == "description")
    {
        //return mPlayer.GetFieldDescription();
    }
    if(input == "sp" || input == "savepoint") {
        //return mPlayer.SetSavePoint();
    }
    if(input == "listSavePoints") {
        //return mPlayer.ListAvailableSavePoints();
    }
    //Pick-up and Drop Items
    QStringList splittedInput = input.split(" ");

    if(splittedInput.length() == 2) // pick-up/drop only one item
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup") {
            return mPlayer.PickUpItemOfType(splittedInput[1]);
        }
        if(splittedInput[0] == "d" || splittedInput[0] == "drop") {
            return mPlayer.DropItemOfType(splittedInput[1]);
        }
    }

    if(splittedInput.length() == 3) // pick-up/drop multiple or all available items
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                return mPlayer.PickUpAllItemsOfType(splittedInput[1]);
            }
            else
            {
                return mPlayer.PickUpMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
            }
        }

        if(splittedInput[0] == "d" || splittedInput[0] == "drop")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                return mPlayer.DropAllItemsOfType(splittedInput[1]);
            }
            else
            {
                return mPlayer.DropMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
            }
        }
    }

    //flexible input lenght
    if(splittedInput[0] == "use") {
        QString itemName = input.remove(0, 4);
        if(mPlayer.HasItem(itemName) || mPlayer.CurrentField->HasItem(itemName)) {
            return Level_One.UseItem(mPlayer.CurrentField, itemName);
        }
        else
            return "Can't find item: " + itemName;
    }

    return("No fitting interpretation was found for: " + input + "\n      Please try something else.");
}

void Game::SetStateToNewGame()
{
    currentState = &States::newGameState;
}

void Game::SetStateToInitialLoad()
{
    ChangeState("initialLoadGameState");
}
