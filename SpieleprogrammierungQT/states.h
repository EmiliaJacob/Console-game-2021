#ifndef STATES_H
#define STATES_H

#include "idlestate.h"
#include "pickupstate.h"

class States
{
public:
    States();
    inline static IdleState idleState;
    inline static PickUpState pickUpState;
};

#endif // STATES_H
