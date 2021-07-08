#ifndef IDLESTATE_H
#define IDLESTATE_H
#include "istates.h"

class IdleState : public IStates
{
public:
    IdleState();
    virtual void ExecuteCommand(Game game, QString command);
    virtual void GetStandardOutput();
};

#endif // IDLESTATE_H
