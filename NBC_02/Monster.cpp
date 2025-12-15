#include "Monster.h"
#include "Player.h"
#include <iostream>
#include <algorithm>

using namespace std;

Monster::Monster(string name) : name(name)
{
	// 몬스터 이름을 제외한 나머지 변수 초기화
	setHP(10);
	setPower(30);
	setDefence(10);
	setSpeed(10);
}

void Monster::attack(Player* player)
{
	// 최소 damage가 1이 되도록 
	int damage = max(1, getPower() - player->getDefence());

	cout << player->getNickname()<< "에게" << damage << "의 피해를 입혔다!" << '\n';
	// 플레이어의 HP set
	player->setHP(player->getHP() - damage);
	// 플레이어 생존하면 플레이어의 남의 HP 출력
	if (player->getHP() > 0)
	{
		cout << "플레이어의 남은 HP: " << player->getHP() << '\n';
	}


}
