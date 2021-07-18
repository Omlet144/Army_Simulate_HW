#pragma once
#include "C_Weapon_Polearm_spear.h"
class C_Weapon_Polearm_spear_halberd :
    public C_Weapon_Polearm_spear
{
    void attack(int attack_weapen) { std::cout << "Halberd attack(twice as strong): " << attack_weapen * 2 << "\n"; }
    void  breack(int break_weapen) { std::cout << "Halberd breack(twice as strong): " << break_weapen * 2 << "\n"; }
};

