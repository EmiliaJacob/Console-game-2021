#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <field.h>



class GameBoard
{
private:
    QList<Field> mFields;
public:
    GameBoard();
    bool CheckForRelativeField(QString direction);
    Field GetRelativeField(QString direction);
    void Read(QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // GAMEBOARD_H
