#ifndef DROPSTATE_H
#define DROPSTATE_H

#include "istates.h"



class DropState : public IStates
{
    Q_OBJECT

public:
    DropState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void listInventoryRequest();
    void dropOneRequest(QString itemname);
    void dropManyRequest(QString itemname, int amount);
    void dropAllRequest(QString itemname);
};

#endif // DROPSTATE_H
