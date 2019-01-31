#include "witch.h"

Witch::Witch()
{
    potionAvailable[0] = potionAvailable[1] = true;
}

void Witch::use(enum potion potion, Player *playerID)
{
    if (myGame.getDaytime() == Game::night && validAction(playerID) && potionAvailable[potion] && myGame.getNightCount() > 1) //using potions in the first night is prohibited
    {
        currentPotion = potion;
        target = playerID;
        switch (potion)
        {
        case deathPotion:
            potionAvailable[potion] = false;
            break;
        case shieldPotion:
            //set protect value, like bodyguard shield only destroyed if player was attacked
            potionAvailable[potion] = false;
            break;
        }
    }
}

Player *Witch::getTarget() const
{
    return target;
}

Witch::potion Witch::getCurrentPotion() const
{
    return currentPotion;
}