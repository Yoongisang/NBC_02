#include "Thief.h"
#include "Monster.h"
#include <algorithm>
#include <iostream>

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "도적";
	level = 1;
	setHP(10);
	setMP(20);
	setPower(20);
	setDefence(20);
	setAccuracy(70);
	setSpeed(70);
}

void Thief::attack()
{
	cout << "도적 공격: " << power << '\n';
}

void Thief::attack(Monster* monster)
{
	int damage = max(1, getPower() - monster->getDefence());

	for (int i = 0; i < 5; i++)
	{
		cout << monster->getName() << "에게 단검으로 " << damage / 5 << "의 피해를 입혔다!" << '\n';
	}


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