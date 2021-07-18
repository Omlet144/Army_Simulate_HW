#pragma once
#include <iostream>
#include "C_Weapon.h"

class C_Weapon_Hand :
    public C_Weapon
{
    virtual void attack() override { std::cout << "Hand attack\n"; }
    virtual void  breack() override { std::cout << "Hand breack\n"; }
};