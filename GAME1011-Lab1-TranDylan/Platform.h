#include <iostream>
using namespace std;

class Platform
{
private:
	string name;
	string manufacturer;

public:

	Platform(string n, string m);
	void setName(string n);
	void setManufacturer(string n);
	string getName();
	string getManufacturer();
	string setName();
	string setManufacturer();
};
#pragma once
