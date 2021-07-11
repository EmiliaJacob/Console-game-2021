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
    emit listSavePointsRequest();
    emit issueConsoleOutput("b: return into main-menu");
    emit issueConsoleOutput("Enter the desired save-point:");
}
