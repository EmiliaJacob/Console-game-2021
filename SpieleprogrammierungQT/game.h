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
    QString SaveGame();
    bool LoadGame();
    QString InputHandler(QString input);
public slots:
    void HandleCommand(int command);
    void ChangeState(QString stateName);
};

#endif // GAME_H
