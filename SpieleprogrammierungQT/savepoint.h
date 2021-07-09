#ifndef SAVEPOINT_H
#define SAVEPOINT_H

#include <QJsonObject>
#include <QString>

class SavePoint
{
public:
    SavePoint();

    QString fieldId; // TODO: replace maybe for a pointer
    QString Name;

    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // SAVEPOINT_H
