#ifndef WITCH_H
#define WITCH_H

#include "player.h"

class Witch : public Player
{
public:
    Witch();

    enum potion{deathPotion, shieldPotion};

    void use(enum potion potion, Player *playerID);

private:
    bool potionAvailable[2];
};

#endif // WITCH_H
