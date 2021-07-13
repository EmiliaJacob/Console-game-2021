#ifndef LOADGAMESTATE_H
#define LOADGAMESTATE_H


#include "istates.h"

#include <QObject>

class LoadGameState : public IStates
{
    Q_OBJECT

public:
    LoadGameState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void loadGameRequest(int savespointIndex);
    void listSavepointsRequest();
};

#endif // LOADGAMESTATE_H
