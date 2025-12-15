#include "Magician.h"
#include "Monster.h"
#include <algorithm>
#include <iostream>

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "마법사";
	level = 4;
	setHP(100);
	setMP(200);
	setPower(30);
	setDefence(10);
	setAccuracy(60);
	setSpeed(40);
}

void Magician::attack()
{
	cout << "마법사 공격: " << power << '\n';
}

void Magician::attack(Monster* monster)
{
	int damage = max(1, getPower() - monster->getDefence());


	cout << monster->getName() << "에게 매직미사일로 " << damage << "의 피해를 입혔다!" << '\n';



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