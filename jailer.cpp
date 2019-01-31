#include "jailer.h"

Jailer::Jailer()
{
}

void Jailer::jail(Player *playerID)
{
    if (myGame.getDaytime() == Game::day && validAction(playerID))
    {
        jails = playerID;
    }
}

Player *Jailer::getJails() const
{
    return jails;
}