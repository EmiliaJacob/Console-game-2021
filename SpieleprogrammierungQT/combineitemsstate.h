#ifndef COMBINEITEMSSTATE_H
#define COMBINEITEMSSTATE_H

#include "istates.h"



class CombineItemsState : public IStates
{
Q_OBJECT
public:
    CombineItemsState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void issueConsoleOutput(QString output);
    void listInventoryRequest();
    void combineItemsRequest(QString items);
    void changeStateRequest(QString newState);
};

#endif // COMBINEITEMSSTATE_H
