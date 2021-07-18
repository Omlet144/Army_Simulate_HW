#pragma once
#include <ostream>
class C_Weapon
{
public:
	C_Weapon()
	{
		this->attack_weapen = 0;
		this->break_weapen = 0;
	}
	C_Weapon(int attack_weapen, int break_weapen)
	{
		this->attack_weapen = attack_weapen;
		this->break_weapen = break_weapen;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Weapon& weapon) {
		out << "attack: " << weapon.attack_weapen << "\n break: " << weapon.break_weapen << "\n";
		return out;
	}
protected:
	int attack_weapen;
	int break_weapen;
};

