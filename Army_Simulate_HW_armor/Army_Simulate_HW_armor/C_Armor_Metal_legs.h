#pragma once
#include "C_Armor_Metal.h"
class C_Armor_Metal_legs :
    public C_Armor_Metal
{
    void take_a_hit(int take_a_hit_on_the_armor) { std::cout << "Metal armor take a hit: " << take_a_hit_on_the_armor << "\n"; }
    void  breack(int) { std::cout << "Metal armor breack: " << break_armor << "\n"; }
};

