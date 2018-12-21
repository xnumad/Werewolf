#ifndef BODYGUARD_H
#define BODYGUARD_H

#include "player.h"

class Bodyguard : public Player
{
public:
    Bodyguard();
    void protect(Player *playerID);

private:
    bool shield;
    //Player *protects; //pointer for the playerID he protects
};

#endif // BODYGUARD_H
