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
	
	Weapon();
	Weapon(string wn, string d, string dv, string sa);
	
	string getWeaponName()
	{
		return weaponName;
	}

	string getDescription()
	{
		return description;
	}

	string getDamageValue()
	{
		return damageValue;
	}

	string getSpecialAbility()
	{
		return specialAbility;
	}

	void setWeaponName(string weaponName)
	{
		this->weaponName = weaponName;
	}

	void setDescription(string description)
	{
		this->description = description;
	}

	void setDamageValue(string damageValue)
	{
		this->damageValue = damageValue;
	}

	void setSpecialAbility(string specialAbility)
	{
		this->specialAbility = specialAbility;
	}

};



