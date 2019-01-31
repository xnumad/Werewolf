#include "shaman.h"

Shaman::Shaman()
{
}

void Shaman::enchant(Player *playerID)
{
    if (myGame.getDaytime() == Game::day && validAction(playerID))
    {
        enchants = playerID;
    }
}

Player *Shaman::getEnchants() const
{
    return enchants;
}