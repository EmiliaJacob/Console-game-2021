#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "field.h"
#include <iostream>

class Player
{
private:

public:
    Field* CurrentPosition;

    Player();
    void Move(std::string direction);
};

#endif // PLAYER_H
