#ifndef IDLESTATE_H
#define IDLESTATE_H
#include "istates.h"
#include <QObject>

class IdleState : public IStates
{
    Q_OBJECT
public:
    IdleState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();
signals:
    void changeStateRequest(QString newState);
    void moveRequest(QString direction);
    void descriptionRequest();
    void issueConsoleOutput(QString output);
    void saveGameRequest();
};

#endif // IDLESTATE_H
