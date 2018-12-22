#include "priest.h"

Priest::Priest()
{
}

void Priest::holyWater(Player *playerID)
{
    if (myGame.getDaytime() == Game::day)
    {
        if (playerID->determineAura() == bad)
        {
            playerID->die(other); //blessed player dies //Kill option
        }
        else
        {
            die(other); //priest dies //Kill option
        }
    }
}
