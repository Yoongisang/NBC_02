#include "Archer.h"
#include <iostream>

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "궁수";
	level = 5;
	HP = 100;
	MP = 100;
	power = 50;
	defence = 10;
	accuracy = 80;
	speed = 50;
}

void Archer::attack()
{
	cout << "궁수 공격: " << power << '\n';
}
