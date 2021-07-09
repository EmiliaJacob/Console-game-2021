#ifndef PICKUPSTATE_H
#define PICKUPSTATE_H

#include "istates.h"



class PickUpState : public IStates
{
    Q_OBJECT

public:
    PickUpState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void listAvailableItemsRequest();
    void pickUpOneRequest(QString itemname);
    void pickUpManyRequest(QString itemname, int amount);
    void pickUpAllRequest(QString itemname);
};

#endif // PICKUPSTATE_H
