#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <field.h>



class GameBoard
{
private:
    QList<Field> mFields;
public:
    GameBoard();
    Field* GetField(QString fieldId);
    void Read(const QJsonObject &json);
    void Write(QJsonObject &json);
};

#endif // GAMEBOARD_H
