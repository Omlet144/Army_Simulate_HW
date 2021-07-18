#pragma once
#include <ostream>
#pragma region pure virtual class
class C_Armor
{
public:
	friend std::ostream& operator << (std::ostream& out, const C_Armor& armor) {
		out << "take a hit: " << armor.take_a_hit_on_the_armor << "\n break: " << armor.break_armor << "\n";
		return out;
	}
	virtual void take_a_hit() = 0;
	virtual void breack() = 0;
protected:
	C_Armor()
	{
		this->take_a_hit_on_the_armor = 0;
		this->break_armor = 0;
	}
	C_Armor(int attack_weapen, int break_weapen)
	{
		this->take_a_hit_on_the_armor = attack_weapen;
		this->break_armor = break_weapen;
	}
	int take_a_hit_on_the_armor;
	int break_armor;
};
#pragma endregion