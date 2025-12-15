#include "Thief.h"
#include <iostream>

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "도적";
	level = 8;
	setHP(100);
	setMP(180);
	setPower(90);
	setDefence(20);
	setAccuracy(70);
	setSpeed(70);
}

void Thief::attack()
{
	cout << "도적 공격: " << power << '\n';
}
