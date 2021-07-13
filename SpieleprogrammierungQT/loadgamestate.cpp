#include "loadgamestate.h"

LoadGameState::LoadGameState()
{

}

void LoadGameState::ExecuteCommand(QString command)
{
    if(command != "b") {
        bool ok;
        int savepointIndex = command.toInt(&ok);
        if(ok)
            emit loadGameRequest(savepointIndex);
        else
            emit issueConsoleOutput("Please enter a valid number");
    }
};

void LoadGameState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");
    emit issueConsoleOutput("Please select a savepoint:");
    emit listSavepointsRequest();
    emit issueConsoleOutput("b: Return to main-menu");
}
