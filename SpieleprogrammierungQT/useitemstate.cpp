#include "useitemstate.h"

UseItemState::UseItemState()
{

}

void UseItemState::ExecuteCommand(QString command)
{
    emit useItemRequest(command);
    emit changeStateRequest("idleState");
}

void UseItemState::PrintMenu()
{
    emit listInventoryRequest();
    emit issueConsoleOutput("Enter name of item:");
}
