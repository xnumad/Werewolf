#include "player.h"

Player::Player()
{

}

Player::Player(enum role RoleIn)
{
    role = RoleIn;
}

void Player::vote(Player *playerID) //must be called with "&playerID" as parameter if not a pointer //https://stackoverflow.com/a/1896395
{
    if (validAction(playerID))
    {
        if ((myGame.getDaytime() == Game::night && playerID->determineAura() != bad) || myGame.getDaytime() == Game::day) //Aura check to prevent werewolfes from voting each other (bad aura) at night
        {
            votesFor = playerID; //set attribute to vote for another player
        }

        if (myGame.getDaytime() == Game::night && role == wolfSeer)
        {
            //can't vote except he gave up his ability to see roles
        }
    }
}

void Player::die(deathReason currentDeathReason)
{
    /*todo: foreach Player where protects == currentPlayer {don't die}*/

    switch(currentDeathReason)
    {
    case wolfVote:
        if (role == cursed){
            role = werewolf;
        }
        else if (role == serialKiller){
            //notify werewolfs that their target couldn't be killed
        }
        break;
    case lynch:
        /*todo: foreach Headhunter where target == currentPlayer {win}*/
        //if (role == fool) {Game.win(fool)} //fool not implemented
        break;
    default:
        break;
    }

    if (role == sectLeader)
    {/*todo: kill each player with sectMember == true*/}

    alive = false; //actually kill player

    //todo: display grave to all clients

    if (myGame.getRevealRolesAfterDeath()){
        /*todo: reveal players role*/
    }
}

Player::aura Player::determineAura()
{
    switch(role){
    case werewolf:
    case wolfSeer:
    case shaman:
        return bad;
        break;
    case villager:
    case seer:
    case auraSeer:
        return good;
        break;
    default:
        return unknown;
    }
}

bool Player::validAction(Player *playerID) //Checks if an action makes sense and therefore can be considered valid
{
    return (alive && playerID->alive && (playerID != this)); //3 conditions: BOTH sender and target are alive (as Medium is a role with the ability to revive dead players, it doesn't call this method) and sender is not the same player as target
}

bool Player::getSectMember() const
{
    return sectMember;
}

void Player::setSectMember(bool value)
{
    sectMember = value;
}

bool Player::getEnchanted() const
{
    return enchanted;
}

void Player::setEnchanted(bool value)
{
    enchanted = value;
}

enum Player::role Player::getRole() const
{
    return role;
}

void Player::setRole(const enum role &value)
{
    role = value;
}
Player *Player::getVotesFor() const
{
    return votesFor;
}

void Player::setVotesFor(Player *value)
{
    votesFor = value;
}

