#include "gunner.h"

Gunner::Gunner()
{
    shots = myGame.getGunnerShots();
}

void Gunner::shoot(Player *playerID)
{
    if (validAction(playerID) && shots > 0)
    {
        playerID->die(other); //Kill option
    }
}
