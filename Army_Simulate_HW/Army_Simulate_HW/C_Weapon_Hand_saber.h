#pragma once
#include "C_Weapon_Hand.h"
class C_Weapon_Hand_saber :
    public C_Weapon_Hand
{
    void attack(int attack_weapen) { std::cout << "Saber attack: " << attack_weapen << "\n"; }
    void  breack(int break_weapen) { std::cout << "Saber breack: " << break_weapen << "\n"; }
};