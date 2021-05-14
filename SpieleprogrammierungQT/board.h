#ifndef BOARD_H
#define BOARD_H
#include "section.h"

class Board
{
public:
    Board();
    void SetEntrySection(Section entrySection);
private:
    Section* _entrySection;
};

#endif // BOARD_H
