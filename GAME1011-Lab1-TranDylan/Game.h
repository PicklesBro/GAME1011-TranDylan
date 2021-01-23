#pragma once

#include <iostream>
using namespace std;


class Game
{
private:
	string name;
	string publisher;
	string developer;

public:
	Game();
	Game(string n, string p, string d);
	void setName(string n);
	void setPublisher(string p);
	void setDeveloper(string d);
	string getName();
	string getPublisher();
	string getDeveloper();
};

