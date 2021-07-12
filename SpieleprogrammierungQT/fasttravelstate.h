#ifndef FASTTRAVELSTATE_H
#define FASTTRAVELSTATE_H

#include "istates.h"



class FastTravelState : public IStates
{
Q_OBJECT
public:
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();
    FastTravelState();
signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void fastTravelRequest(QString destination);
    void listSavePointsRequest();
};

#endif // FASTTRAVELSTATE_H
