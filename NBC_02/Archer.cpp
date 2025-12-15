#include "Archer.h"
#include "Monster.h"
#include <algorithm>
#include <iostream>

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "궁수";
	level = 5;
	setHP(100);
	setMP(100);
	setPower(13);
	setDefence(15);
	setAccuracy(80);
	setSpeed(50);
}

void Archer::attack()
{
	cout << "궁수 공격: " << power << '\n';
}

void Archer::attack(Monster* monster)
{
	int damage = max(1, getPower() - monster->getDefence());

	for (int i = 0; i < 3; i++)
	{
		cout << monster->getName() <<"에게 화살로 " << damage / 3 << "의 피해를 입혔다!" << '\n';
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
