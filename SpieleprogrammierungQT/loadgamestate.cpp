#include "loadgamestate.h"

LoadGameState::LoadGameState()
{

}

void LoadGameState::ExecuteCommand(QString command)
{
    if(command != "b") {
        // emit loadGameRequest();
    }

    emit changeStateRequest("idleState");
};

void LoadGameState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");
    emit issueConsoleOutput("Please select a savepoint:");
    emit listSavepointsRequest();
    emit issueConsoleOutput("b: Return to main-menu");
}
