#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
/*#include "priest.h"
#include "sectleader.h"
#include "seer.h"
#include "serialkiller.h"
#include "jailer.h"
#include "bodyguard.h"*/
#include "game.h"

class Player
{
public:
    enum role {
        werewolf,
        villager,
        seer,
        auraSeer,
        wolfSeer,
        shaman,
        cursed,
        witch,
        medium, //missing
        jailer,
        gunner,
        headhunter, //missing
        sectLeader,
        serialKiller,
        bodyguard,
        priest
    };

    Player();
    Player(role role);

    void vote(Player *playerID);

    //->

    enum aura{good,bad,unknown};

    enum deathReason{suicide,lynch,wolfVote,other};

    deathReason currentDeathReason;

    void die(deathReason currentDeathReason);

    aura determineAura();

    bool validAction(Player *playerID);

    bool getSectMember() const;
    void setSectMember(bool value);

    bool getEnchanted() const;
    void setEnchanted(bool value);

    Game myGame; //current game instance

    role getRole() const;
    void setRole(const role &value);

    Player *getVotesFor() const;
    void setVotesFor(Player *value);

private:
    bool alive;
    bool sectMember;
    bool enchanted;
    bool revealed;
    bool jailed;
    role role;
    Player *votesFor;
};

#endif // PLAYER_H
