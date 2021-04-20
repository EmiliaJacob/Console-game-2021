#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "section.h"

class GameBoard
{
public:
    GameBoard();
    void SetEntrySection(Section entrySection);
private:
    Section* _entrySection;
};

#endif // GAMEBOARD_H
