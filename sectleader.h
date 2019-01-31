#ifndef SECTLEADER_H
#define SECTLEADER_H

#include "player.h"

class SectLeader : public Player
{
public:
    SectLeader();
    void addMember(Player *playerID);

private:
    Player *adds;
};

#endif // SECTLEADER_H
