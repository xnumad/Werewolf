#include "shaman.h"

Shaman::Shaman()
{
}

void Shaman::enchant(Player *playerID)
{
    if (myGame.getDaytime() == Game::day && validAction(playerID) && canEnchant) //prevent abuse by verifying that enchanting ability hasn't already been used this day
    {
        playerID->setEnchanted(true);
        canEnchant = false; //disable ability to enchant (will be restored by dayBegin() in Game class every new day) //reference to sectLeader class's addMember method
        //Bug vulnerability: Shaman calls enchant method during day, then dies (no matter in which way) AND in the following night, the affected person is still enchanted (Intended?)
    }
}

void Shaman::setCanEnchant(bool value)
{
    canEnchant = value;
}
