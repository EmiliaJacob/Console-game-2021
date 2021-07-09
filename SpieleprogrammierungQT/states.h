#ifndef STATES_H
#define STATES_H

#include "idlestate.h"
#include "pickupstate.h"
#include "dropstate.h"

class States
{
public:
    States();
    inline static IdleState idleState;
    inline static PickUpState pickUpState;
    inline static DropState dropState;
};

#endif // STATES_H
