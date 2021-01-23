#include "Game.h"

#include "Achievements.h"

Game::Game()
{
	name = "coolGame";
	publisher = "coolPublisher";
	developer = "coolDeveloper";
}

Game::Game(string n, string p, string d)
{
	name = n;
	publisher = p;
	developer = d;
}

string Game::getName()
{
	return name;
}

string Game::getPublisher()
{
	return publisher;
}

string Game::getDeveloper()
{
	return developer;
}



