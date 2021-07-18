#pragma once
#include "C_Weapon_Polearm.h"
class C_Weapon_Polearm_spear :
    public C_Weapon_Polearm
{
    void attack(int attack_weapen) { std::cout << "Spear attack: " << attack_weapen << "\n"; }
    void  breack(int break_weapen) { std::cout << "Spear breack: " << break_weapen << "\n"; }
};

