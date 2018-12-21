#ifndef SEER_H
#define SEER_H

#include "player.h"

class Seer : public Player //Aura seer / seer / wolf seer class
{
public:
    Seer();
    void check(Player *playerID);
};

#endif // SEER_H
