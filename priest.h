#ifndef PRIEST_H
#define PRIEST_H

#include "player.h"

class Priest : public Player
{
public:
    Priest();
    void holyWater(Player *playerID);

    void setWater(bool value);

private:
    bool water;
};

#endif // PRIEST_H
