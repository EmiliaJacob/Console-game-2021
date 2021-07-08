#ifndef ISTATES_H
#define ISTATES_H

#include "game.h"

#include <QString>



class IStates
{
public:
    virtual ~IStates() {};
    virtual void ExecuteCommand(Game game, QString command) {};
    virtual void GetStandardOutput() {};
};

#endif // ISTATES_H
