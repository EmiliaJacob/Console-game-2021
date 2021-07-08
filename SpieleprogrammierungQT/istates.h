#ifndef ISTATES_H
#define ISTATES_H

#include <QString>
#include <QObject>


class IStates : public QObject
{
    Q_OBJECT
public:
    virtual ~IStates() {};
    virtual void ExecuteCommand(int command) {};
    virtual QString GetStandardOutput() {};
};

#endif // ISTATES_H
