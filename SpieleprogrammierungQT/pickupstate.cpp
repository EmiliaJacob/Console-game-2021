#include "pickupstate.h"
#include <QDebug>

PickUpState::PickUpState()
{

}

void PickUpState::ExecuteCommand(QString command)
{
    if(command != "b") {

        QStringList splittedCommand = command.split(' ');
        if(splittedCommand.length() == 1) {
            qDebug() << "FIVE";

            emit pickUpOneRequest(splittedCommand[0]);
        }
        else if(splittedCommand.length() == 2) {
            if(splittedCommand[1] == "all") {
                emit pickUpAllRequest(splittedCommand[0]);
            }
            else {
                bool isInt;
                int amount = splittedCommand[1].toInt(&isInt);
                if(isInt) {
                    emit pickUpManyRequest(splittedCommand[0], amount);
                }
                else {
                    emit issueConsoleOutput("I'm sorry i can't find a function for your command");
                }
            }
        }
        else {
            emit issueConsoleOutput("I'm sorry i can't find a function for your command");
        }
    }

    emit changeStateRequest("idleState");
};

void PickUpState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    emit listAvailableItemsRequest();
    QString menu = "Select the item that you want to pick up.\n   Specify the amount or type 'all'.";
    emit issueConsoleOutput("b: Return into main-menu");
    emit issueConsoleOutput(menu);
}
