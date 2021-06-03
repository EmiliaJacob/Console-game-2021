#include "inputinterpreter.h"
#include <QDebug>

InputInterpreter::InputInterpreter()
{

}

void InputInterpreter::SetPlayer(Player player)
{
    mPlayer = player;
}
void InputInterpreter::Interpret(QString input)
{
    if(input == "mf")
    {
        mPlayer.Move("Forward");
        return;
    }
    if(input == "mb")
    {
        return;
    }
    if(input == "ml")
    {
        return;
    }
    if(input == "mr")
    {
        return;
    }
}
