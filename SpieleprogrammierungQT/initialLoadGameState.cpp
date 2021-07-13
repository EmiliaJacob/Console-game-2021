#include "initialLoadGameState.h"

InitialLoadGameState::InitialLoadGameState()
{

}

void InitialLoadGameState::ExecuteCommand(QString command)
{
        bool ok;
        int savepointIndex = command.toInt(&ok);
        if(ok)
            emit loadGameRequest(savepointIndex);
        else
            emit issueConsoleOutput("Please enter a valid number");
};

void InitialLoadGameState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");
    emit issueConsoleOutput("Please select a savepoint:");
    emit listSavepointsRequest();
}
