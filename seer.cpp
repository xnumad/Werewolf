#include "seer.h"

Seer::Seer()
{
    canCheck = true;
}

void Seer::check(Player *playerID)
{
    if (myGame.getDaytime() == Game::night && validAction(playerID))
    {
        switch (getRole())
        {
        case seer:
            if (playerID->getEnchanted())
            {
                //display overlay shaman
            }
            else
            {
                //overlay(target, target.role);
            }
            break;
        case auraSeer:
            if (playerID->getEnchanted())
            {
                //display overlay bad
            }
            else
            {
                //overlay(target, target.determineAura());
            }
            break;
        case wolfSeer:
            if (playerID->determineAura() == bad)
            {
                return;
            }
            //overlay (target, target.role);
            //todo: Automatically display in wolf chat the role of the player checked by the wolf seer
            break;
        default: //all other cases
            break; //do nothing
        }
        canCheck = false;
    }
}

void Seer::setCanCheck(bool value)
{
    canCheck = value;
}
