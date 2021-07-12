#include "fasttravelstate.h"

FastTravelState::FastTravelState()
{

}

void FastTravelState::ExecuteCommand(QString command)
{
    if(command != "b")
        emit fastTravelRequest(command);

    emit changeStateRequest("idleState");
}

void FastTravelState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    emit listSavePointsRequest();
    emit issueConsoleOutput("b: Return into main-menu");
    emit issueConsoleOutput("Enter the desired save-point:");
}
