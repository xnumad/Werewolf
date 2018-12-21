#ifndef GUNNER_H
#define GUNNER_H

#include "player.h"

class Gunner : public Player
{
public:
    Gunner();

    void shoot(Player *playerID);

private:
    int shots; //shots left
};

#endif // GUNNER_H
