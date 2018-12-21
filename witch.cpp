#include "witch.h"

Witch::Witch()
{
}

void Witch::use(Witch::potion, Player *playerID)
{
    if (validAction(playerID))
    {
        //check if protected first?
        switch (Witch::witchPotion)
        {
        case deathPotion:
            if (myGame.getNightCount() > 1) //deathPotion cannot be used at first night
            {
            //same method as kill() of SerialKiller
            }
            break;
        case shieldPotion:
            //set protect value, like bodyguard shield only destroyed if player was attacked
            break;
        }
    }
}
