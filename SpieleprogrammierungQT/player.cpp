#include "player.h"
#include <QtDebug>
//#include <QtWarning>

Player::Player()
{

}

void Player::Move(QString direction)
{
    if(direction == "forward"){
        if(Player::CurrentPosition->Forward != nullptr){
            Player::CurrentPosition = Player::CurrentPosition->Forward;
            qDebug() << "Moving Forward";
        }
    }
    else if(direction == "backward"){
        if(Player::CurrentPosition->Backward != nullptr){
            Player::CurrentPosition = Player::CurrentPosition->Backward;
            qDebug() << "Moving backward";
        }
    }
    else if(direction == "left"){
        if(Player::CurrentPosition->Left != nullptr){
            qDebug() << "Moving left";
            Player::CurrentPosition = Player::CurrentPosition->Left;
        }
        else{
            qWarning() << "No Field available";
        }
    }
    else if(direction == "right"){
        if(Player::CurrentPosition->Right != nullptr){
            qDebug() << "Moving right";
            Player::CurrentPosition = Player::CurrentPosition->Right;
        }
    }
}
