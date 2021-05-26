#ifndef GAME_H
#define GAME_H

#include "player.h"



class Game
{
private:

public:
    enum SaveFormat // TODO: By-default binary speichern
    {
        Json, Binary
    };
    Player Player;
    Game();
    void NewGame();
    void SaveGame();
    void LoadGame();
};

#endif // GAME_H
