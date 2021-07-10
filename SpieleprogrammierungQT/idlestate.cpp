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
    else if(command == "r") {
        emit changeStateRequest("dropState");
    }
    else if(command == "sg") {
        emit saveGameRequest();
    }
    else if(command == "sp") {
        emit setSavePointRequest();
    }
    else if(command == "f") {
        emit changeStateRequest("fastTravelState");
    }
    else if(command == "c") {
        emit changeStateRequest("combineItemsState");
    }
    else if(command == "u") {
        emit changeStateRequest("useItemState");
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
                             *spacerLeft + "d: Move right           sg: SaveGame\n" +
                             *spacerLeft + "f: Fast-Travel          sp: Set Savepoint\n" +
                             *spacerLeft + "c: Combine items        u: Use item\n";

    emit issueConsoleOutput(menu);
}
