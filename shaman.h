#ifndef SHAMAN_H
#define SHAMAN_H

#include "player.h"

class Shaman : public Player
{
public:
    Shaman();

    void enchant(Player *playerID); //function is being called during daytime

    void setCanEnchant(bool value);

private:
    bool canEnchant;
};

#endif // SHAMAN_H
