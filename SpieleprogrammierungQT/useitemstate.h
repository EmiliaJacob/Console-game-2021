#ifndef USEITEMSTATE_H
#define USEITEMSTATE_H


#include "istates.h"



class UseItemState : public IStates
{
Q_OBJECT
public:
    UseItemState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void issueConsoleOutput(QString output);
    void listInventoryRequest();
    void useItemRequest(QString itemName);
    void changeStateRequest(QString newState);
};

#endif // USEITEMSTATE_H
