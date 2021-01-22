#include "Game.h"

#include "Achievements.h"

Game::Game(string n, string p, string d)
{
	name = n;
	publisher = p;
	developer = d;
}

void Game::setName(string n)
{
	name = n;
}

void Game::setPublisher(string p)
{
	publisher = p;
}

void Game::setDeveloper(string d)
{
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
