#ifndef PLAYER_H
#define PLAYER_H
#include "field.h"
#include <QString>
#include <iostream>

class Player
{
private:

public:
    Field* CurrentPosition;

    Player();
    void Move(QString direction);
};

#endif // PLAYER_H
