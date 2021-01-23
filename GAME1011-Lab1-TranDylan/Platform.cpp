#include "Platform.h"

Platform::Platform(string n, string m)
{
	name = n;
	manufacturer = m;
}

void Platform::setName(string n)
{
	name = n;
}

void Platform::setManufacturer(string n)
{
	manufacturer = n;
}

string Platform::getName()
{
	return name;
}

string Platform::getManufacturer()
{
	return manufacturer;
}

string Platform::setName()
{
	return name;
}

string Platform::setManufacturer()
{
	return manufacturer;
}



