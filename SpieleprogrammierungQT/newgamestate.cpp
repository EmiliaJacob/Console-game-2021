#include "newgamestate.h"

NewGameState::NewGameState()
{

}

void NewGameState::ExecuteCommand(QString command)
{
    if(! command.isEmpty()) {
        emit newGameRequest(command);
    }
    else {
        emit issueConsoleOutput("Please enter a name");
    }
};

void NewGameState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");
    QString menu = "Welcome.\n   Please enter your name:";
    emit issueConsoleOutput(menu);
}
