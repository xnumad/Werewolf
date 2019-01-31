#ifndef GUNNER_H
#define GUNNER_H

#include "player.h"

class Gunner : public Player
{
public:
    Gunner();

    void shoot(Player *playerID);

    void setCanShoot(bool value);

private:
    int shots; //shots left
    bool canShoot;
};

#endif // GUNNER_H
