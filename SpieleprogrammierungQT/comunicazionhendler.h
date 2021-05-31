#ifndef COMUNICAZIONHENDLER_H
#define COMUNICAZIONHENDLER_H
#include <QTextStream>

class comunicazionhendler
{
public:
    comunicazionhendler();
    ~comunicazionhendler();
    QString playersays(QString command);
};

#endif // COMUNICAZIONHENDLER_H
