#include "Warrior.h"
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
