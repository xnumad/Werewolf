#ifndef WITCH_H
#define WITCH_H

#include "player.h"

class Witch : public Player
{
public:
    Witch();

    enum potion{deathPotion, shieldPotion}; //wie speichert man, ob der Trank schon benutzt wurde?
    //->
    potion witchPotion;

    void use(potion, Player *playerID);
};

#endif // WITCH_H
