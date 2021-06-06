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
    inline static GameBoard GameBoard;
    Game();
    void NewGame();
    void SaveGame();
    bool LoadGame();
    void InputHandler(QString input);
};

#endif // GAME_H
