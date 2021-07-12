#include "savegamestate.h"
#include <QDebug>

SaveGameState::SaveGameState()
{

}

void SaveGameState::ExecuteCommand(QString command)
{
    if(command != "b") {
        emit saveGameRequest();
    }

    emit changeStateRequest("idleState");
};

void SaveGameState::PrintMenu()
{
    emit issueConsoleOutput("---------------------------------------------------");

    QString menu = "Do you want to save the game?.\n   y: Save the game\n   n: Return to main-menu";
    emit issueConsoleOutput(menu);
}
