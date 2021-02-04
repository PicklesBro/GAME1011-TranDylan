#pragma once
#include <iostream>
using namespace std;

class Weapon
{
private:
	string weaponName;
	string description;
	string damageValue;
	string specialAbility;
public: 

	string getWeaponName();
	string getDescription();
	string getDamageValue();
	string getSpecialAbility();

	void setWeaponName(string weaponName);
	void setDescription(string description);
	void setDamageValue(string damageValue);
	void setSpecialAbility(string specialAbility);


};

// Derived class
class demon
{

};

