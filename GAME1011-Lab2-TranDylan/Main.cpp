#include <iostream>
#include "Character.h"
#include "Weapon.h"
using namespace std;

int main()
{
	// Objects  

	int gameState = 0;
	int playerChoice = 0;
	int deleted = 0;

	const int CHARACTER_NUMBER = 4;
	const int WEAPON_NUMBER = 4;

	Character characterSelect[CHARACTER_NUMBER];
	characterSelect[0] = Character("Human", 100);
	characterSelect[1] = Character("Orc", 120);
	characterSelect[2] = Character("Undead", 150);

	Weapon weaponSelect[WEAPON_NUMBER];
	weaponSelect[0] = Weapon("Hammer", "Smash your enemies in","20", "Hammer Down");
	weaponSelect[1] = Weapon("Bite", "Munch your enemies", "25", "Undying Rage");
	weaponSelect[2] = Weapon("Sharpened Stick", "Stab your enemies", "20", "Unstoppable Force");


	
	// Menu 
	cout << "Welcome to the character customizer!" <<endl << "\n";
	string menu = "Select a number to begin customization\n\n1:\t Create a new character\n2:\t View all characters\n3:\t Delete a character\n4:\t Exit";
	

	while (gameState == 0)
	{
		cout << menu << endl;
		cin >> playerChoice;
		cout << endl;
		
		// Characters
		if (playerChoice == 1)
		{
			
			cout << "Select a character to profile to create!\n\n1:\tHuman\n2:\tOrc\n3:\tUndead" << endl;
			cin >> playerChoice;
			cout << endl;
			
			// Profiles
			if (playerChoice == 1 && deleted != 1)
			{
				
				cout << "Name: " << characterSelect[0].getName() << " Health: " <<characterSelect[0].getHealthValue() << endl;
				cout << "Weapon Name: " << weaponSelect[0].getWeaponName() << "\nWeapon Description: " << weaponSelect[0].getDescription() << "\n";
				cout << "Damage: " << weaponSelect[0].getDamageValue() << "\nSpecial Ability: " << weaponSelect[0].getSpecialAbility() << "\n";
				cout << endl;
			}

			if (playerChoice == 2 && deleted != 2)
			{

				cout << "Name: " << characterSelect[1].getName() << " Health: " << characterSelect[1].getHealthValue() << endl;
				cout << "Weapon Name: "<< weaponSelect[1].getWeaponName() << "\nWeapon Description: " << weaponSelect[1].getDescription() << "\n";
				cout << "Damage: " << weaponSelect[1].getDamageValue() << "\nSpecial Ability: " << weaponSelect[1].getSpecialAbility() << "\n";
				cout << endl;
			}

			if (playerChoice == 3 && deleted != 3)
			{

				cout << "Name: " << characterSelect[2].getName() << " Health: " << characterSelect[2].getHealthValue() << endl;
				cout << "Weapon Name: " << weaponSelect[2].getWeaponName() << "\nWeapon Description: " << weaponSelect[2].getDescription() << "\n";
				cout << "Damage: " << weaponSelect[2].getDamageValue() << "\nSpecial Ability: " << weaponSelect[2].getSpecialAbility() << "\n";
				cout << endl;
			}
			
		}
		// List of characters
		else if (playerChoice == 2)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << "Name: " << characterSelect[i].getName() << "\tHealth: 100" << endl;
				cout << "Weapon Name: " << weaponSelect[i].getWeaponName() << "\nWeapon Description: " << weaponSelect[i].getDescription() << "\n";
				cout << "Damage: " << weaponSelect[i].getDamageValue() << "\nSpecial Ability: " << weaponSelect[i].getSpecialAbility() << "\n";
				cout << endl << "\n";
			}
		}

		// Delete a character
		else if (playerChoice == 3)
		{
			
			cout << "Delete a character\n\n1:\tHuman\n2:\tOrc\n3:\tUndead" << endl;
			cin >> playerChoice;
			if (playerChoice == 1)
			{
				deleted = 1;
			}
			if (playerChoice == 2)
			{
				deleted = 2;
			}
			if (playerChoice == 3)
			{
				deleted = 3;
			}
		}
		// Exit game
		else if (playerChoice == 4)
		{
			gameState = 1;
			cout << "Thanks for playing!" << endl;
		}
	}
	

	return 0;
}