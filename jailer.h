#ifndef JAILER_H
#define JAILER_H

#include "player.h"

class Jailer : public Player
{
public:
    Jailer();
    void jail(Player *playerID);

    void setCanJail(bool value);

private:
    bool canJail;
};

#endif // JAILER_H
