#ifndef INITIALLOADGAMESTATE_H
#define INITIALLOADGAMESTATE_H



#include "istates.h"

#include <QObject>

class InitialLoadGameState : public IStates
{
    Q_OBJECT

public:
    InitialLoadGameState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void loadGameRequest(int savepointIndex);
    void listSavepointsRequest();

};
#endif // INITIALLOADGAMESTATE_H
