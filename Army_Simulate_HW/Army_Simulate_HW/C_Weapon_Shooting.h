#pragma once
#include <iostream>
#include "C_Weapon.h"

class C_Weapon_Shooting :
    public C_Weapon
{
    virtual void attack() override { std::cout << "Shooting attack\n"; }
    virtual void  breack() override { std::cout << "Shooting breack\n"; }
};