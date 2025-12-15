#include <iostream>
#include "player.h"
#include "warrior.h"
#include "Magician.h"
#include "thief.h"
#include "Archer.h"
#include "Monster.h"

using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;
   
    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    // 플레이어 직업 생성 후 몬스터 생성
    Monster* monster = new Monster("슬라임");
    
    // 몬스터가 플레이어 먼저 공격(몬스터가 더 약하기 때문)
    monster->attack(player);

    // 플레이어가 살아있다면 몬스터 대상 공격(도적은 슬라임에게 죽기때문에 공격이 안됨)
    if (player->getHP() > 0)
    {
        player->attack(monster);
    }

    // 플레이어 Status 표기
    player->printPlayerStatus();

    // 플레이어 동적할당 해제 스위치 문에서 캐릭터 생성이 안될 수 있기때문에 체크
    if (player != nullptr)
        delete player;
    // 몬스터는 반드시 생성하기 때문에 해제
    delete monster;

    return 0;
}