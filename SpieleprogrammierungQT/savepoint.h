#ifndef SAVEPOINT_H
#define SAVEPOINT_H

#include <QString>

class SavePoint
{
public:
    SavePoint();

    QString fieldId; // TODO: replace maybe for a pointer
    QString Name;
};

#endif // SAVEPOINT_H
