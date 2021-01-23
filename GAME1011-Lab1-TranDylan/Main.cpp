#include <iostream>
#include "Platform.h"
#include "Game.h"
#include "Achievements.h"
#include "string"
using namespace std;
//This is a platform class

int main()
{	
	int gameState = 1;
	string playerSelect;

	// Achievement arrays for title, description and scorepoints
	const int GAMES = 5;
	const int ACHIEVEMENTS_NUMBER = 5;
	Achievement achievementsT[ACHIEVEMENTS_NUMBER];
	Achievement achievementsD[ACHIEVEMENTS_NUMBER];
	Achievement achievementsSV[ACHIEVEMENTS_NUMBER];

	// Platforms 
	Platform playstation("Playstation 5", "Sony");
	Platform nintendo("Nintendo Switch", "Nintendo");
	Platform xbox("Xbox Series X", "Microsoft");

	// Nintendo games
	Game Nintendo[GAMES];
	Nintendo[0] = Game("Celeste", "Matt Makes Games", "Matt Makes Games");
	Nintendo[1] = Game("The Legend Of Zelda, Breath of the Wild", "Nintendo", "Nintendo EPD");
	Nintendo[2] = Game("Pokemon Sword", "Nintendo", "Game Freak");
	Nintendo[3] = Game("Pokemon Shield", "Nintendo", "Game Freak");
	Nintendo[4] = Game("Super Smash Bros Ultimate", "Nintendo", "Sora ltd");

	// Xbox games
	Game Xbox[GAMES];
	Xbox[0] = Game("Cuphead", "Microsoft", "studio MDHR");
	Xbox[1] = Game("The Elder Scrolls V: Skyrim", "Bethesda Softworks", "Bethesda Game Studios");
	Xbox[2] = Game("Halo Infinite", "Xbox Game Studios", "343 Industries");
	Xbox[3] = Game("Cyberpunk 2077", "CD Projekt", "CD Projekt Red");
	Xbox[4] = Game("Grand Theft Auto V", "Rockstar Games", "Rockstar Games");

	// playstation games
	Game Playstation[GAMES];
	Playstation[0] = Game("Hollow Knight", "Team Cherry", "Team Cherry");
	Playstation[1] = Game("Bugsnax", "Young Horses", "Young Horses");
	Playstation[2] = Game("Sackboy: A Big Adventure", "Sony Interactive Entertainment", "Sumo Digital");
	Playstation[3] = Game("Ratchet & Clank: Rift Apart", "Sony Interactive Entertainment", "Insomniac Games");
	Playstation[4] = Game("Horizon Forbidden West", "Sony Interactive Entertainment", "Guerrilla Games");
	
	// game will play until gamestate is not 1
	while (gameState == 1)
	{
		// Main menu 
		cout << "Pick a console from 1 - 3 to develop achievements for...\nOr press 4 to end the game" << endl << "\n";

		cout << "1 = " << playstation.getName() << ", Manufactured by " << playstation.getManufacturer() << endl;
		cout << "2 = " << xbox.getName() << ", Manufactured by " << xbox.getManufacturer() << endl;
		cout << "3 = " << nintendo.getName() << ", Manufactured by " << nintendo.getManufacturer() << endl;
		cout << "4 = End The Game" << endl << "\n";

		getline(cin, playerSelect);
		if (playerSelect == "4")
		{
			gameState = 2;
		}
		//cout << "To select a platform to create achievements for, please select a number between 1 an 3" << endl;

		// Picked playstation
		if (playerSelect == "1")
		{
			cout << endl;
			cout << "You have chosen the Playstation 5 as your platform of choice..." << endl;
			cout << "The games you get to develop achievements for in order are..." << endl << "\n";

			// Iterates through game details and allows you to input achievement details
			for (int i = 0; i < GAMES; i++)
			{

				cout << Playstation[i].getName() << " published by " << Playstation[i].getPublisher() << " and developed by " << Playstation[i].getDeveloper() << endl << "\n";
				cout << "Write an achievement name to go with this game..." << endl;
				getline(cin, playerSelect);
				achievementsT[i].setTitle(playerSelect);
				cout << "Write an achievement description to go with this game..." << endl;
				getline(cin, playerSelect);
				achievementsD[i].setDescription(playerSelect);
				cout << "Write how many points the achievement will give..." << endl;
				getline(cin, playerSelect);
				achievementsSV[i].setScoreValue(playerSelect);
				cout << endl;
			}

			// Prints out the information the user put in 
			cout << "Your Achievements are listed below!" << endl << "\n";
			cout << playstation.getName() << ", Manufactured by " << playstation.getManufacturer() << endl << "\n";

			for (int i = 0; i < GAMES; i++)
			{
				cout << Playstation[i].getName() << " published by " << Playstation[i].getPublisher() << " and developed by " << Playstation[i].getDeveloper() << endl << "\n";
				cout << "Achievement: " << achievementsT[i].getTitle() << endl;
				cout << "Description: " << achievementsD[i].getDescription() << endl;
				cout << "Points: " << achievementsSV[i].getScoreValue() << endl << "\n";
			}

		}

		// Picked Xbox
		else if (playerSelect == "2")
		{
			cout << endl;
			cout << "You have chosen the Xbox Series X as your platform of choice..." << endl;
			cout << "The games you get to develop achievements for in order are..." << endl << "\n";
			
			// Iterates through game details and allows you to input achievement details
			for (int i = 0; i < GAMES; i++)
			{
				cout << Xbox[i].getName() << " published by " << Xbox[i].getPublisher() << " and developed by " << Xbox[i].getDeveloper() << endl << "\n";
				cout << "Write an achievement name to go with this game..." << endl;
				getline(cin, playerSelect);
				achievementsT[i].setTitle(playerSelect);
				cout << "Write an achievement description to go with this game..." << endl;
				getline(cin, playerSelect);
				achievementsD[i].setDescription(playerSelect);
				cout << "Write how many points the achievement will give..." << endl;
				getline(cin, playerSelect);
				achievementsSV[i].setScoreValue(playerSelect);
				cout << endl;
			}

			// Prints out the information the user put in 
			cout << "Your Achievements are listed below!" << endl;
			cout << xbox.getName() << ", Manufactured by " << xbox.getManufacturer() << endl << "\n";
			cout << "Platform: Xbox Series X" << endl;
			for (int i = 0; i < GAMES; i++)
			{
				cout << Xbox[i].getName() << " published by " << Xbox[i].getPublisher() << " and developed by " << Xbox[i].getDeveloper() << endl << "\n";
				cout << "Achievement: " << achievementsT[i].getTitle() << endl;
				cout << "Description: " << achievementsD[i].getDescription() << endl;
				cout << "Points: " << achievementsSV[i].getScoreValue() << endl << "\n";
			}
		}

		else if (playerSelect == "3")
		{
			cout << endl;
			cout << "You have chosen the Nintendo Switch as your platform of choice..." << endl;
			cout << "The games you get to develop achievements for in order are..." << endl << "\n";
			
			// Iterates through game details and allows you to input achievement details
			for (int i = 0; i < GAMES; i++)
			{
				cout << Nintendo[i].getName() << " published by " << Nintendo[i].getPublisher() << " and developed by " << Nintendo[i].getDeveloper() << endl << "\n";
				cout << "Write an achievement name to go with this game..." << endl;
				getline(cin, playerSelect);
				achievementsT[i].setTitle(playerSelect);
				cout << "Write an achievement description to go with this game..." << endl;
				getline(cin, playerSelect);
				achievementsD[i].setDescription(playerSelect);
				cout << "Write how many points the achievement will give..." << endl;
				getline(cin, playerSelect);
				achievementsSV[i].setScoreValue(playerSelect);
				cout << endl;
			}

			// Prints out the information the user put in 
			cout << "Your Achievements are listed below!" << endl;
			cout << nintendo.getName() << ", Manufactured by " << nintendo.getManufacturer() << endl << "\n";
			for (int i = 0; i < GAMES; i++)
			{
				cout << Nintendo[i].getName() << " published by " << Nintendo[i].getPublisher() << " and developed by " << Nintendo[i].getDeveloper() << endl << "\n";
				cout << "Achievement: " << achievementsT[i].getTitle() << endl;
				cout << "Description: " << achievementsD[i].getDescription() << endl;
				cout << "Points: " << achievementsSV[i].getScoreValue() << endl << "\n";
			}
		}
	}
	cout << "Thanks for playing!";
	return 0;
}

