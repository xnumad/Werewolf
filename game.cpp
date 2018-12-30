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
    //foreach Player votesFor = 0 && jailed = false
    //foreach(Player *player in Player)
    //set canAdd = true for all sectLeaders

    //set canEnchant = true for all shamans
    //reset all enchantments of all previously enchanted players
}

void Game::nightbegin() //will be executed from first night and on
{
    daytime = night;
    //foreach Player votesFor = 0
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
//    foreach (*Player, Rplayer) {
}
