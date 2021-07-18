#pragma once
#include <ostream>
#pragma region pure virtual class
class C_Weapon
{
public:
	friend std::ostream& operator << (std::ostream& out, const C_Weapon& weapon) {
		out << "attack: " << weapon.attack_weapen << "\n break: " << weapon.break_weapen << "\n";
		return out;
	}
	virtual void attack() = 0;
	virtual void breack() = 0;
protected:
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
	int attack_weapen;
	int break_weapen;
};
#pragma endregion

