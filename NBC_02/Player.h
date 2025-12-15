#pragma once
#include <string>

class Monster;

using namespace std;

class Player {
public:
    // 부모 생성자에서는 닉네임만 초기화(한줄로 끝나기 때문에 헤더에 정의)
    Player(string nickname) : nickname(nickname) {}

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();

    // getter 함수 (한줄로 끝나기 때문에 헤더에 정의)
    string getJobName() const { return job_name; }
    string getNickname() const { return nickname; }
    int getLevel() const { return level; }
    int getHP() const { return HP; }
    int getMP() const { return MP; }
    int getPower() const { return power; }
    int getDefence() const { return defence; }
    int getAccuracy() const { return accuracy; }
    int getSpeed() const { return speed; }

    // setter 함수 (한줄로 끝나기 때문에 헤더에 정의)
    void setNickname(string nickname) { this->nickname = nickname; }
    void setHP(int HP) { this->HP = HP; }
    void setMP(int MP) { this->MP = MP; }
    void setPower(int power) { this->power = power; }
    void setDefence(int defence) { this->defence = defence; }
    void setAccuracy(int accuracy) { this->accuracy = accuracy; }
    void setSpeed(int speed) { this->speed = speed; }

protected:
    // 멤버 변수
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