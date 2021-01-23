#include <iostream>
using namespace std;

class Achievement
{
private:
	string title;
	string description;
	string scoreValue;
public:

	Achievement();
	Achievement(string t, string d, string sv);
	void setTitle(string t);
	void setDescription(string d);
	void setScoreValue(string sv);
	string getTitle();
	string getDescription();
	string getScoreValue();
};