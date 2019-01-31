#include "gunner.h"

Gunner::Gunner()
{
    shots = myGame.getGunnerShots();
    canShoot = true;
}

void Gunner::shoot(Player *playerID)
{
    if (myGame.getDaytime() == Game::day && validAction(playerID) && shots > 0)
    {
        playerID->die(other); //Kill option
        canShoot = false;
    }
}

void Gunner::setCanShoot(bool value)
{
    canShoot = value;
}
