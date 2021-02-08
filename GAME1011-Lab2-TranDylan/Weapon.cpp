#include "Weapon.h"

// Default
Weapon::Weapon()
{
	weaponName = "Katana";
	description	= "Sharp as nails";
	damageValue = "15";
	specialAbility = "Windslash";
}

// Non-Default
Weapon::Weapon(string wn, string d, string dv, string sa)
{
	weaponName = wn;
	description = d;
	damageValue = dv;
	specialAbility = sa;
}


