#include "sectleader.h"

SectLeader::SectLeader()
{
}

void SectLeader::addMember(Player *playerID)
{
    if (validAction(playerID) && !playerID->getSectMember()) //verify that player to add to sect is not a member yet
    {
      playerID->setSectMember(true);
      canAdd = false; //disable ability to add member (will be restored by dayBegin() in Game class every new day) //reference to shaman class's enchant method
    }
}

void SectLeader::setCanAdd(bool value)
{
    canAdd = value;
}
