#ifndef FIELD_H
#define FIELD_H


class Field
{
public:
    Field* Forward;
    Field* Backward;
    Field* Left;
    Field* Right;

    int Id;

    Field();
};

#endif // FIELD_H
