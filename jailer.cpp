#include "jailer.h"

Jailer::Jailer()
{
}

void Jailer::jail(Player *playerID)
{
    if (myGame.getDaytime() == Game::night && validAction(playerID) && canJail)
    {
      //create new chat instance for jailer and imprisoned person
      //give jailer ability to kill imprisoned person //Kill option
      canJail = false;
    }
}

void Jailer::setCanJail(bool value)
{
    canJail = value;
}
