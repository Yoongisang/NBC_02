#include "Warrior.h"
#include "Monster.h"
#include <algorithm>
#include <iostream>

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "전사";
	level = 10;
	setHP(200);
	setMP(100);
	setPower(100);
	setDefence(50);
	setAccuracy(50);
	setSpeed(50);
}

void Warrior::attack()
{
	cout << "전사 공격: " << power << '\n';
}

void Warrior::attack(Monster* monster)
{
	int damage = max(1, getPower() - monster->getDefence());


	cout << monster->getName() << "에게 강타로 " << damage << "의 피해를 입혔다!" << '\n';


	monster->setHP(monster->getHP() - damage);
	if (monster->getHP() > 0)
	{
		cout << monster->getName() << "의 남은 HP: " << monster->getHP() << '\n';
	}
	else
	{
		cout << getNickname() << "의 승리!" << '\n';
	}

}