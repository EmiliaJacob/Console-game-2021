#ifndef STATES_H
#define STATES_H

#include "idlestate.h"
#include "pickupstate.h"
#include "dropstate.h"
#include "fasttravelstate.h"
#include "combineitemsstate.h"

class States
{
public:
    States();
    inline static IdleState idleState;
    inline static PickUpState pickUpState;
    inline static DropState dropState;
    inline static FastTravelState fastTravelState;
    inline static CombineItemsState combineItemsState;
};

#endif // STATES_H
