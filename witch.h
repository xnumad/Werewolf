#ifndef WITCH_H
#define WITCH_H

#include "player.h"

class Witch : public Player
{
public:
    Witch();

    enum potion{deathPotion, shieldPotion};

    void use(enum potion potion, Player *playerID);

    Player *getTarget() const;

    potion getCurrentPotion() const;

private:
    bool potionAvailable[2];
    Player *target;
    potion currentPotion;
};

#endif // WITCH_H
