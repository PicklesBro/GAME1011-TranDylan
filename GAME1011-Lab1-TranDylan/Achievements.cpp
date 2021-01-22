#include "Achievements.h"


Achievement::Achievement(string t, string d, string sv)
{
	title = t;
	description = d;
	scoreValue = sv;
}

void Achievement::setTitle(string t)
{
	title = t;
}

void Achievement::setDescription(string d)
{
	description = d;
}

void Achievement::setDeveloper(string sv)
{
	scoreValue = sv;
}

string Achievement::getTitle()
{
	return title;
}

string Achievement::getDescription()
{
	return description;
}

string Achievement::getScoreValue()
{
	return scoreValue;
}
