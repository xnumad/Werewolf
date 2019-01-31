#include "game.h"
#include "player.h" //do not include in game.h because player.h already includes game.h

Game::Game()
{
    dayDiscussionTime = dayVotingTime = nightTime = 30000;
    nightCount = 0;
    revealRolesAfterDeath = true;
    gunnerShots = 2;
}

void Game::dayBegin()
{
    daytime = day;
    //foreach Player votesFor = 0 && jailed = false && enchanted = false
    //foreach(Player *player in Player)
    //set canShoot = true for all gunners
    //set canEnchant = true for all shamans
    //if (sectLeader->alive) {sectLeader->getAdds()->setSectMember(true);}
    //if (serialKiller->alive) {
    ////check if protected first
    //serialKiller->getKills()->die(other)} //Kill option

    //if (witch->alive) {
    //    switch (witch->getCurrentPotion()) {
    //    case deathPotion:
    //        witch->getTarget()->die(other);
    //        break;
    //    case shieldPotion:
    //
    //        break;
    //    }
    //}
}

void Game::nightbegin() //will be executed from first night and on
{
    daytime = night;
    //foreach Player votesFor = 0
    //set canKill = true for all serialKillers
    //set canCheck = true for all seers
    //if (shaman->alive) {shaman->getEnchants()->setEnchanted(true);}
    //create seperate chat instance between jailer and jailer->getProtects(), give jailer ability to kill imprisoned person //Kill option
    nightCount++; //first night will be 1 if integer initialized with value 0 -> no interferences with blocking witch from using death potion during the first night
}

int Game::getDayDiscussionTime() const
{
    return dayDiscussionTime;
}

void Game::setDayDiscussionTime(int value)
{
    dayDiscussionTime = value;
}
int Game::getDayVotingTime() const
{
    return dayVotingTime;
}

void Game::setDayVotingTime(int value)
{
    dayVotingTime = value;
}
int Game::getNightTime() const
{
    return nightTime;
}

void Game::setNightTime(int value)
{
    nightTime = value;
}
int Game::getNightCount() const
{
    return nightCount;
}

void Game::setNightCount(int value)
{
    nightCount = value;
}
bool Game::getRevealRolesAfterDeath() const
{
    return revealRolesAfterDeath;
}

void Game::setRevealRolesAfterDeath(bool value)
{
    revealRolesAfterDeath = value;
}

enum Game::daytime Game::getDaytime() const
{
    return daytime;
}

void Game::setDaytime(const enum daytime &value)
{
    daytime = value;
}

int Game::getGunnerShots() const
{
    return gunnerShots;
}

void Game::setup()
{
    //foreach (*Player, Rplayer) {
}
