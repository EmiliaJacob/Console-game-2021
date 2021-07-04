#include "inputhandler.h"

void InputHandler::DoIt(QString input) // TODO: Make this a slot
{
    if(input == "sg")
    {
        mGame->SaveGame();
        return;
    }

    if(input == "mf" || input == "move forward")
    {
        mGame->mPlayer.Move("forward");
        return;
    }
    if(input == "mb" || input == "move backward")
    {
        mGame->mPlayer.Move("backward");
        return;
    }
    if(input == "mr" || input == "move right")
    {
        mGame->mPlayer.Move("right");
        return;
    }
    if(input == "ml" || input == "move left")
    {
        mGame->mPlayer.Move("left");
        return;
    }


    if(input == "ai" || input == "available items")
    {
        mGame->mPlayer.ListAvailableItems();
        return;
    }
    if(input == "d" || input == "description")
    {
        mGame->mPlayer.GetFieldDescription();
        return;
    }


    //Pick-up and Drop Items
    QStringList splittedInput = input.split(" ");

    if(splittedInput.length() == 2) // pick-up/drop only one item
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup")
        {
            mGame->mPlayer.PickUpItemOfType(splittedInput[1]);
            return;
        }
        if(splittedInput[0] == "d" || splittedInput[0] == "drop")
        {
            mGame->mPlayer.DropItemOfType(splittedInput[1]);
            return;
        }
    }

    if(splittedInput.length() == 3) // pick-up/drop multiple or all available items
    {
        if(splittedInput[0] == "p" || splittedInput[0] == "pickup")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                mGame->mPlayer.PickUpAllItemsOfType(splittedInput[1]);
                return;
            }
            else
            {
                mGame->mPlayer.PickUpMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
                return;
            }
        }

        if(splittedInput[0] == "d" || splittedInput[0] == "drop")
        {
            if(splittedInput[2] == "a" || splittedInput[2] == "all")
            {
                mGame->mPlayer.DropAllItemsOfType(splittedInput[1]);
                return;
            }
            else
            {
                mGame->mPlayer.DropMultipleItemsOfType(splittedInput[1], splittedInput[2].toInt());
                return;
            }
        }
    }

    //return("No fitting interpretation was found for: " + input + "\n      Please try something else.");
}

void InputHandler::SetGame(Game game)
{
    mGame = &game;
}

void InputHandler::SetMainWindow(MainWindow mainWindow)
{
    mMainWindow = &mainWindow;
}
