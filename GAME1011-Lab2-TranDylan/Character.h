#pragma once
#include <iostream>
using namespace std;
class Character
{
private:
	string name;
	int healthValue;
public:
	
	//Default
	Character()
	{
		name = "George";
		healthValue = 100; 
	}

	//Non-default
	Character(string n, int h)
	{
		name = n;
		healthValue = h;
	}

	void setName(string n)
	{
		name = n;  
	}

	void setHealthValue(int hv)
	{
		healthValue = hv;
	}

	string getName()
	{
		return name; 
	}

	int getHealthValue()
	{
		return healthValue;
	}
};

