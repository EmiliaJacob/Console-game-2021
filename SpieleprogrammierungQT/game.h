#ifndef GAME_H
#define GAME_H

#include "level.h"
#include "player.h"

class Game
{
private:

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
};

#endif // GAME_H
