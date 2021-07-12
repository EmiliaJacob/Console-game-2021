#ifndef STATES_H
#define STATES_H

#include "idlestate.h"
#include "pickupstate.h"
#include "dropstate.h"
#include "fasttravelstate.h"
#include "combineitemsstate.h"
#include "useitemstate.h"
#include "savegamestate.h"

class States
{
public:
    States();
    inline static IdleState idleState;
    inline static PickUpState pickUpState;
    inline static DropState dropState;
    inline static FastTravelState fastTravelState;
    inline static CombineItemsState combineItemsState;
    inline static UseItemState useItemState;
    inline static SaveGameState saveGameState;
};

#endif // STATES_H
