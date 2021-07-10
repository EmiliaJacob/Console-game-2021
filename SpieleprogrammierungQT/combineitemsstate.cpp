#include "combineitemsstate.h"

CombineItemsState::CombineItemsState()
{

}

void CombineItemsState::ExecuteCommand(QString command)
{
    emit combineItemsRequest(command);
    emit changeStateRequest("idleState");
}

void CombineItemsState::PrintMenu()
{
    emit issueConsoleOutput("Select two items to combine them");
    emit listInventoryRequest();
}
