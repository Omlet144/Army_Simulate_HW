#pragma once
#include "C_Weapon_Shooting.h"
class C_Weapon_Shooting_bow :
    public C_Weapon_Shooting
{
    void attack(int attack_weapen) { std::cout << "Bow attack: " << attack_weapen << "\n"; }
    void  breack(int break_weapen) { std::cout << "Bow breack: " << break_weapen << "\n"; }
};

