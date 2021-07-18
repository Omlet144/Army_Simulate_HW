#pragma once
#include "C_Armor_Rag.h"
class C_Armor_Rag_helmet :
    public C_Armor_Rag
{
    void take_a_hit(int take_a_hit_on_the_armor) { std::cout << "Metal armor take a hit: " << take_a_hit_on_the_armor << "\n"; }
    void  breack(int) { std::cout << "Metal armor breack: " << break_armor << "\n"; }
};

