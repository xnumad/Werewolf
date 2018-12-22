#include "bodyguard.h"

Bodyguard::Bodyguard()
{
    shield = true;
}

void Bodyguard::protect(Player *playerID)
{
    if (myGame.getDaytime() == Game::night && validAction(playerID))
    {
        protects = playerID;
    }
}
