#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    void dayBegin();
    void nightbegin();

    enum daytime {night, day};

    int getDayDiscussionTime() const;
    void setDayDiscussionTime(int value);

    int getDayVotingTime() const;
    void setDayVotingTime(int value);

    int getNightTime() const;
    void setNightTime(int value);

    int getNightCount() const;
    void setNightCount(int value);

    bool getRevealRolesAfterDeath() const;
    void setRevealRolesAfterDeath(bool value);

    daytime getDaytime() const;
    void setDaytime(const daytime &value);

    int getGunnerShots() const;

private:
    daytime daytime;
    int dayDiscussionTime,dayVotingTime,nightTime,nightCount;
    bool revealRolesAfterDeath, highlightBadVoters;
    int gunnerShots;
};

#endif // GAME_H
