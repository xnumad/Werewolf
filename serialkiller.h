#ifndef SERIALKILLER_H
#define SERIALKILLER_H

#include "player.h"

class SerialKiller : public Player
{
public:
    SerialKiller();
    void kill(Player *playerID);
};

#endif // SERIALKILLER_H
