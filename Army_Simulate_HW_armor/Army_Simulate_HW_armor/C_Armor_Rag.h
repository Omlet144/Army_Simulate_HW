#pragma once
#include <iostream>;
#include "C_Armor.h"
class C_Armor_Rag :
    public C_Armor
{
    virtual void take_a_hit() override { std::cout << "Rag armor take a hit\n"; }
    virtual void  breack() override { std::cout << "Rag armor breack\n"; }
};

