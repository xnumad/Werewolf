#ifndef JAILER_H
#define JAILER_H

#include "player.h"

class Jailer : public Player
{
public:
    Jailer();
    void jail(Player *playerID);

    Player *getJails() const;

private:
    Player *jails;
};

#endif // JAILER_H
