#ifndef IDLESTATE_H
#define IDLESTATE_H
#include "istates.h"
#include <QObject>

class IdleState : public IStates
{
    Q_OBJECT
public:
    IdleState();
    virtual void ExecuteCommand(int command);
    virtual void PrintMenu();
signals:
    void moveRequest(QString direction);
    void descriptionRequest();
    void issueConsoleOutput(QString output);
};

#endif // IDLESTATE_H
