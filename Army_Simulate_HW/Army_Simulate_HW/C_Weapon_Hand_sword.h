#pragma once
#include "C_Weapon_Hand.h"
class C_Weapon_Hand_sword :
    public C_Weapon_Hand
{
    void attack(int attack_weapen) { std::cout << "Sword attack: " << attack_weapen << "\n"; }
    void  breack(int break_weapen) { std::cout << "Sword breack: " << break_weapen << "\n"; }
};

