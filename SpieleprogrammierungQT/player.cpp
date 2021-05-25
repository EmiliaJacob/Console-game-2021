#include "player.h"

Player::Player()
{

}

void Player::Move(std::string direction)
{
    if(direction == "forward"){
        if(Player::CurrentPosition->Forward != nullptr){
            Player::CurrentPosition = Player::CurrentPosition->Forward;
            std::cout << "Moving forward" << std::endl;
        }
    }
    else if(direction == "backward"){
        if(Player::CurrentPosition->Backward != nullptr){
            Player::CurrentPosition = Player::CurrentPosition->Backward;
            std::cout << "Moving backward" << std::endl;
        }
    }
    else if(direction == "left"){
        if(Player::CurrentPosition->Left != nullptr){
            std::cout << "Moving left" << std::endl;
            Player::CurrentPosition = Player::CurrentPosition->Left;
        }
        else{
            std::cout << "No Field available" << std::endl;
        }
    }
    else if(direction == "right"){
        if(Player::CurrentPosition->Right != nullptr){
            std::cout << "Moving right" << std::endl;
            Player::CurrentPosition = Player::CurrentPosition->Right;
        }
    }
}
