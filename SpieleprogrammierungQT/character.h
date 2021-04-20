#ifndef CHARACTER_H
#define CHARACTER_H
#include "section.h"

class Character
{
public:
    Character();
    void SetCurrentSection(Section currentSection);
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
private:
    Section* _currentSection;
};

#endif // CHARACTER_H
