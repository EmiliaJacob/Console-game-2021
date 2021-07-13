#ifndef STATES_H
#define STATES_H

#include "idlestate.h"
#include "pickupstate.h"
#include "dropstate.h"
#include "fasttravelstate.h"
#include "combineitemsstate.h"
#include "useitemstate.h"
#include "savegamestate.h"
#include "loadgamestate.h"
#include "newgamestate.h"
#include "initialLoadGameState.h"

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
    inline static LoadGameState loadGameState;
    inline static NewGameState newGameState;
    inline static InitialLoadGameState initialLoadGameState;
};

#endif // STATES_H
