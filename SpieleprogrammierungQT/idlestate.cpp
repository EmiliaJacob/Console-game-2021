#include "idlestate.h"
#include <QDebug>

IdleState::IdleState()
{

}


void IdleState::ExecuteCommand(QString command)
{
    if(command == "w") {
        emit moveRequest("forward");
    }
    else if(command == "s") {
        emit moveRequest("backward");
    }
    else if(command == "a") {
        emit moveRequest("left");
    }
    else if(command == "d") {
        emit moveRequest("right");
    }
    else if(command =="p") {
        emit changeStateRequest("pickUpState");
    }
    else if(command =="l") {
        emit descriptionRequest();
    }
    else {
        emit issueConsoleOutput("I'm sorry i can't find a function for your command");
    }
};


void IdleState::PrintMenu()
{
    QString* spacerLeft = new QString(5, ' ');
    QString menu = "Please select an option: \n" +
                             *spacerLeft + "w: Move forward         l: Inspect environment\n" +
                             *spacerLeft + "s: Move backward        p: Pick up item\n" +
                             *spacerLeft + "a: Move left            r: Drop item\n" +
                             *spacerLeft + "d: Move right";

    emit issueConsoleOutput(menu);
}
