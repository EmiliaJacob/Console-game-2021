#ifndef GAME_H
#define GAME_H

#include "gameboard.h"
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
    static GameBoard GameBoard;
    Game();
    void NewGame();
    void SaveGame();
    void LoadGame();
};

#endif // GAME_H
