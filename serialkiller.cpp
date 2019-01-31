#include "serialkiller.h"

SerialKiller::SerialKiller()
{
}

void SerialKiller::kill(Player *playerID) //same method as deathPotion in use() of Witch
{
    if (myGame.getDaytime() == Game::night && validAction(playerID))
    {
        kills = playerID;
    }
}

Player *SerialKiller::getKills() const
{
    return kills;
}