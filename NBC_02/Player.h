#pragma once
#include <string>

using namespace std;

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0;
    void printPlayerStatus();

    // getter 함수
    string getJobName() const { return job_name; }
    string getNickname() const { return nickname; }
    int getLevel() const { return level; }
    int getHP() const { return HP; }
    int getMP() const { return MP; }
    int getPower() const { return power; }
    int getDefence() const { return defence; }
    int getAccuracy() const { return accuracy; }
    int getSpeed() const { return speed; }

    // setter 함수
    void setNickname(string nickname) { this->nickname = nickname; }
    void setHP(int HP) { this->HP = HP; }
    void setMP(int MP) { this->MP = MP; }
    void setPower(int power) { this->power = power; }
    void setDefence(int defence) { this->defence = defence; }
    void setAccuracy(int accuracy) { this->accuracy = accuracy; }
    void setSpeed(int speed) { this->speed = speed; }

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};