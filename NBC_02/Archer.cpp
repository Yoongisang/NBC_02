#include "Archer.h"
#include <iostream>

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "궁수";
	level = 5;
	setHP(100);
	setMP(100);
	setPower(50);
	setDefence(15);
	setAccuracy(80);
	setSpeed(50);
}

void Archer::attack()
{
	cout << "궁수 공격: " << power << '\n';
}
