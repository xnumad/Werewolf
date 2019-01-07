#include "serialkiller.h"

SerialKiller::SerialKiller()
{
}

void SerialKiller::kill(Player *playerID) //same method as deathPotion in use() of Witch
{
    if (myGame.getDaytime() == Game::night && validAction(playerID))
    {
        //check if protected first?
        playerID->die(other);
    }
}
