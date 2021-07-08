#include "pickupstate.h"

PickUpState::PickUpState()
{

}

void PickUpState::ExecuteCommand(int command)
{
    QString resultOutput;

    switch (command) {
        case 1:
            break;
        default:
            PickUpState::emit issueConsoleOutput("I'm sorry i can't find a function for your command");
    }
};

void PickUpState::PrintMenu()
{
    emit listAvailableItemsRequest();

    QString menu = "Select the item that you want to pick up. Specify the amount or type 'all'.\n";
    emit issueConsoleOutput(menu);
}
