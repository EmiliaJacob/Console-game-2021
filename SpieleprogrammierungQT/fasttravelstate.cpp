#include "fasttravelstate.h"

FastTravelState::FastTravelState()
{

}

void FastTravelState::ExecuteCommand(QString command)
{
    emit fastTravelRequest(command);
    emit changeStateRequest("idleState");
}

void FastTravelState::PrintMenu()
{
    emit issueConsoleOutput("Enter desired Fast-Travel destination:");
    emit listSavePointsRequest();
}
