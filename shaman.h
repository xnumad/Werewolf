#ifndef SHAMAN_H
#define SHAMAN_H

#include "player.h"

class Shaman : public Player
{
public:
    Shaman();

    void enchant(Player *playerID); //function is being called during daytime
    Player *getEnchants() const;

private:
    Player *enchants;
};

#endif // SHAMAN_H
