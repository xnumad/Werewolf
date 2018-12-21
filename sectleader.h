#ifndef SECTLEADER_H
#define SECTLEADER_H

#include "player.h"

class SectLeader : public Player
{
public:
    SectLeader();
    void addMember(Player *playerID);

    void setCanAdd(bool value);

private:
    bool canAdd;
};

#endif // SECTLEADER_H
