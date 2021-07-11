#include "useitemstate.h"

UseItemState::UseItemState()
{

}

void UseItemState::ExecuteCommand(QString command)
{
    if(command != "b") {
        emit useItemRequest(command);
    }

    emit changeStateRequest("idleState");
}

void UseItemState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    emit listInventoryRequest();

    emit issueConsoleOutput("b: Return into main-menu");

    emit issueConsoleOutput("Enter name of the item that you intend to use:");
}
