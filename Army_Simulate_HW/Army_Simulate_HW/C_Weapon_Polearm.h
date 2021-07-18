#pragma once
#include <iostream>
#include "C_Weapon.h"

class C_Weapon_Polearm :
    public C_Weapon
{
    virtual void attack() override { std::cout << "Polearm attack:\n"; }
    virtual void  breack() override { std::cout << "Polearm breack:\n"; }
};