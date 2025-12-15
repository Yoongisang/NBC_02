#include "Magician.h"
#include <iostream>

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "마법사";
	level = 4;
	setHP(100);
	setMP(200);
	setPower(100);
	setDefence(10);
	setAccuracy(60);
	setSpeed(40);
}

void Magician::attack()
{
	cout << "마법사 공격: " << power << '\n';
}
