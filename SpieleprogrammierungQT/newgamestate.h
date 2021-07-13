#ifndef NEWGAMESTATE_H
#define NEWGAMESTATE_H



#include "istates.h"

#include <QObject>

class NewGameState : public IStates
{
    Q_OBJECT

public:
    NewGameState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void newGameRequest(QString playerName);
};


#endif // NEWGAMESTATE_H
