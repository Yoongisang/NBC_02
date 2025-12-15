#include "Monster.h"
#include "Player.h"
#include <iostream>
#include <algorithm>

using namespace std;

Monster::Monster(string name)
{
	setName(name);
	setHP(10);
	setPower(30);
	setDefence(10);
	setSpeed(10);
}

void Monster::attack(Player* player)
{
	int damage = max(1, getPower() - player->getDefence());

	cout << player->getNickname()<< "에게" << damage << "의 피해를 입혔다!" << '\n';

	player->setHP(player->getHP() - damage);
	if (player->getHP() > 0)
	{
		cout << "플레이어의 남은 HP: " << player->getHP() << '\n';
	}


}
