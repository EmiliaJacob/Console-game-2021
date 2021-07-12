#include "combineitemsstate.h"

CombineItemsState::CombineItemsState()
{

}

void CombineItemsState::ExecuteCommand(QString command)
{
    if(command != "b") {
        emit combineItemsRequest(command);
    }

    emit changeStateRequest("idleState");
}

void CombineItemsState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    emit listInventoryRequest();

    emit issueConsoleOutput("b: Return into main-menu");

    emit issueConsoleOutput("Enter the names of the two items that you want to combine.\n   Separate them with a space.");
}
