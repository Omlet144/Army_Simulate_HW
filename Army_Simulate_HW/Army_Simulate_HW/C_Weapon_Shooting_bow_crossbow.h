#pragma once
#include "C_Weapon_Shooting_bow.h"
class C_Weapon_Shooting_bow_crossbow :
    public C_Weapon_Shooting_bow
{
    void attack(int attack_weapen) { std::cout << "Crossbow attack: " << attack_weapen << "\n"; }
    void  breack(int break_weapen) { std::cout << "Crossbow breack: " << break_weapen << "\n"; }
};

