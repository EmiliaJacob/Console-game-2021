#include "idlestate.h"

IdleState::IdleState()
{

}

void IdleState::ExecuteCommand(int command)
{
    QString resultOutput;

    switch (command) {
        case 1:
            emit moveRequest("Forward");
            break;
        case 2:
            emit moveRequest("Backward");
            break;
        case 3:
            emit moveRequest("Left");
            break;
        case 4:
            emit moveRequest("Right");
            break;
        case 5:
            emit descriptionRequest();
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        //default:
            //emit issueConsoleOutput("I'm sorry i can't find a function for your command");
    }
};

void IdleState::PrintMenu()
{
    QString menu = "Please select an option: \n"
                             "     1.) Move forward \n"
                             "     2.) Move backward \n"
                             "     3.) Move left \n"
                             "     4.) Move right \n"
                             "     5.) Inspect environment \n"
                             "     6.) Pick up item \n"
                             "     7.) Drop item \n"
                             "     8.) Pick up item \n";

    emit issueConsoleOutput(menu);
}
