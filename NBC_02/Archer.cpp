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
	// 최소 damage가 1이 되도록
	int damage = max(1, getPower() - monster->getDefence());

	// 직업 군마다 단일 공격과 다단히트 공격으로 출력 다단히트의 경우 공격력 / 공격 횟수를 틱당 damage로 출력
	for (int i = 0; i < 3; i++)
	{
		cout << monster->getName() <<"에게 화살로 " << damage / 3 << "의 피해를 입혔다!" << '\n';
	}
	
	// 몬스터의 HP set
	monster->setHP(monster->getHP() - damage);
	// 몬스터가 생존했으면 남은 HP 출력 해치웠다면 플레이어 승리 선언
	if (monster->getHP() > 0)
	{
		cout << monster->getName() << "의 남은 HP: " << monster->getHP() << '\n';
	}
	else
	{
		cout << getNickname() << "의 승리!" << '\n';
	}

}
