#ifndef SAVEGAMESTATE_H
#define SAVEGAMESTATE_H
#include "istates.h"

#include <QObject>

class SaveGameState : public IStates
{
    Q_OBJECT

public:
    SaveGameState();
    virtual void ExecuteCommand(QString command);
    virtual void PrintMenu();

signals:
    void changeStateRequest(QString newState);
    void issueConsoleOutput(QString output);
    void saveGameRequest();
};
#endif // SAVEGAMESTATE_H
