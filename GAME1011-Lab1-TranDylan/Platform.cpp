#include "Platform.h"

Platform::Platform(string n, string m)
{
	name = n;
	manufacturer = m;
}

string Platform::getName()
{
	return name;
}

string Platform::getManufacturer()
{
	return manufacturer;
}




