#ifndef GAME_H
#define GAME_H

#include "istates.h"
#include "level.h"
#include "player.h"
#include "states.h"
#include <QObject>

class Game : public QObject
{
Q_OBJECT

private:
    IStates* currentState;

public:
    enum SaveFormat // TODO: By-default binary speichern
    {
        Json, Binary
    };

    Player mPlayer;
    inline static Level Level_One;
    Game();
    void Write(QJsonObject &json);
    void NewGame();
    bool LoadGame();
    QString InputHandler(QString input);
public slots:
    void SaveGame();
    void HandleCommand(QString command);
    void ChangeState(QString stateName);
signals:
    void issueConsoleOutput(QString output);
};

#endif // GAME_H
