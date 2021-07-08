#include "idlestate.h"
#include <QDebug>

IdleState::IdleState()
{

}

void IdleState::ExecuteCommand(int command)
{
    QString resultOutput;

    switch (command) {
        case 1:
            qDebug() << "Received forward";
            emit moveRequest("forward");
            break;
        case 2:
            emit moveRequest("backward");
            break;
        case 3:
            emit moveRequest("left");
            break;
        case 4:
            emit moveRequest("right");
            break;
        case 5:
            emit descriptionRequest();
            break;
        case 6:
            emit changeStateRequest("pickUpState");
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            emit issueConsoleOutput("I'm sorry i can't find a function for your command");
    }
};

void IdleState::PrintMenu()
{
    QString* spacerLeft = new QString(5, ' ');
    QString menu = "Please select an option: \n" +
                             *spacerLeft + "1.) Move forward         5.) Inspect environment\n" +
                             *spacerLeft + "2.) Move backward        6.) Pick up item\n" +
                             *spacerLeft + "3.) Move left            7.) Drop item\n" +
                             *spacerLeft + "4.) Move right           8.) Pick up item\n";

    emit issueConsoleOutput(menu);
}
