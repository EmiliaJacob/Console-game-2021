#ifndef SECTION_H
#define SECTION_H
#include "description.h"
#include "item.h"
#include "interaction.h"
#include "danger.h"

class Section
{
public:
    Section();
    description Description;
    Interaction Interactions[];

};

#endif // SECTION_H
