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
    emit issueConsoleOutput("Select the item that you want to use here:");
    emit listInventoryRequest();
}
