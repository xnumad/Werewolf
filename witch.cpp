#include "witch.h"

Witch::Witch()
{
    potionAvailable[0] = potionAvailable[1] = true;
}

void Witch::use(enum potion potion, Player *playerID)
{
    if (myGame.getDaytime() == Game::night && validAction(playerID) && potionAvailable[potion])
    {
        //check if protected first?
        switch (potion)
        {
        case deathPotion:
            if (myGame.getNightCount() > 1) //deathPotion cannot be used at first night
            {
                playerID->die(other); //same method as kill() of SerialKiller
                potionAvailable[potion] = false;
            }
            break;
        case shieldPotion:
            //set protect value, like bodyguard shield only destroyed if player was attacked
            potionAvailable[potion] = false;
            break;
        }
    }
}