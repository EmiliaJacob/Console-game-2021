#ifndef PLAYER_H
#define PLAYER_H
#include "field.h"
#include "inventory.h"
#include "savepoint.h"
#include <QJsonArray>
#include <QString>
#include <QList>
#include <iostream>

class Player : public QObject
{
    Q_OBJECT
private:
    Inventory mInventory;
public:
    QString Name;
    Field* CurrentField;
    QList<SavePoint> unlockedSavePoints;
    Player();
    void Read(const QJsonObject &json);
    void Write(QJsonObject &json);
    QString SetSavePoint();
    bool HasItem(QString itemName);
public slots:
    //QString FastTravel(QString destination);
    QString ListAvailableSavePoints();
    void Move(QString direction);
    //QString PickUpItems(QString itemType, int numberOfItems);
    QString PickUpItemOfType(QString itemType);
    QString PickUpMultipleItemsOfType(QString itemType, int numberOfItems);
    QString PickUpAllItemsOfType(QString itemType);
    QString DropItemOfType(QString itemName);
    QString DropMultipleItemsOfType(QString itemType, int numberOfItems);
    QString DropAllItemsOfType(QString itemType);
    QString ListAvailableItemsOnField();
    void ListInventory();
    void GetFieldDescription(); // TODO : rename -> you don't get anything
signals:
    void issueConsoleOutput(QString output);
};

#endif // PLAYER_H
