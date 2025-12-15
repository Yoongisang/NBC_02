#include "Player.h"
#include <iostream>

Player::Player(string nickname)
{
    setNickname(nickname);
}


void Player::printPlayerStatus()
{
    cout << "------------------------------------" << '\n';
    cout << "* 현재 능력치" << '\n';
    cout << "닉네임: " << nickname << '\n';
    cout << "Lv. " << level << '\n';
    cout << "HP: " << HP << '\n';
    cout << "MP: " << MP << '\n';
    cout << "공격력: " << power << '\n';
    cout << "방어력: " << defence << '\n';
    cout << "정확도: " << accuracy << '\n';
    cout << "속도: " << speed << '\n';
    cout << "------------------------------------" << '\n';
}