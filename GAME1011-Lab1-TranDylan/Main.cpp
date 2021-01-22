#include <iostream>
#include "Platform.h"
#include "Game.h"
#include "Achievements.h"
using namespace std;
//This is a platform class

int main()
{
	string playerSelect;
	
	
	cout << "Create a video game platform with games and achievements!" << endl << "\n";
	
	// Platforms
	//	cout << "How many platforms do you want to creates? ";

		

		Platform Platform1("hi","bye") ; 
	cout << "Make a platform: " << endl << "\n";
	cin >> playerSelect;
	Platform1.setName(playerSelect);
	cout << Platform1.getsName();
	cout << "Make an achievement:" << endl << "\n";
	

	Platform playstation("Playstation 5", "Sony");
	Platform nintendo("Nintendo Switch", "Nintendo");
	Platform xbox("Xbox Series X", "Microsoft");



	Game game1("a", "s", "s");

	



	


	
}