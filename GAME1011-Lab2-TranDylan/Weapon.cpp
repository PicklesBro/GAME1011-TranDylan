#include "Weapon.h"

string Weapon::getWeaponName()
{
	return weaponName;
}

string Weapon::getDescription()
{
	return description;
}

string Weapon::getDamageValue()
{
	return damageValue;
}

string Weapon::getSpecialAbility()
{
	return specialAbility;
}

void Weapon::setWeaponName(string weaponName)
{
	this->weaponName = weaponName;
}

void Weapon::setDescription(string description)
{
	this->description = description;
}

void Weapon::setDamageValue(string damageValue)
{
	this->damageValue = damageValue;
}

void Weapon::setSpecialAbility(string specialAbility)
{
	this->specialAbility = specialAbility;
}
