#include "sectleader.h"

SectLeader::SectLeader()
{
}

void SectLeader::addMember(Player *playerID)
{
    if (myGame.getDaytime() == Game::night && validAction(playerID) && !playerID->getSectMember()) //verify that player to add to sect is not a member yet
    {
        adds = playerID;
    }
}