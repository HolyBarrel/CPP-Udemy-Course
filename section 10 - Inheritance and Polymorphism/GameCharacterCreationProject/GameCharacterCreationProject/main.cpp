#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Mage.h"
#include "Monk.h"
#include "Priest.h"
#include <vector>
#include <limits>
using namespace std;

void run();

void printCharacters(vector<Player*>& characterVector);

void deleteCharacters(vector<Player*>& characterVector);

void printCharacter(Player* character);

//The task is found in the PDF under the resource-folder

int main()
{
	run();

	return 0;
}

void run()
{
	bool running = true;

	vector<Player*> characterVector;

	cout << "Welcome to the RPG Character Creation Project" << endl;
	int currentClassChoice = 0;
	string chosenName = "";
	int currentRaceChoice = 0;

	while (running)
	{
		retry:

		currentClassChoice = 0;
		chosenName = "";
		currentRaceChoice = 0;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			goto retry;
		}

		//CLASS
		cout << "Please enter the corresponding integer input for the character class you want to create: " << endl << endl
			<< "\t 1 - Warrior (300 HP, 0 MP): Utilizes a melee weapon to strike the enemy" << endl
			<< "\t 2 - Priest (100 HP, 200 MP): Assaults the foe with divine magic forces" << endl
			<< "\t 3 - Mage (120 HP, 180 MP): Deals powerful magic spells to the enemy's defenses" << endl
			<< "\t 4 - Monk (150 HP, 150 MP): Attacks the foe with the zen strength of the elders' wisdom" << endl
			<< "\t 5 - Exit character creation" << endl;

		cin >> currentClassChoice;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Range requested for legal input
		if (currentClassChoice >= 1 && currentClassChoice <= 4)
		{
			cout << "Your choice was: " << currentClassChoice << endl;
			
		}
		else if (currentClassChoice == 5)
		{
			cout << "Exiting the character creation.." << endl;
			break;
		}
		else
		{
			cout << "Detected incorrect integer input! Please try agian." << endl << endl;
			goto retry;
		}

		//NAME

		cout << "Please enter the name for your character:" << endl << endl;

		getline(cin, chosenName);

		//Range requested for legal input
		if (chosenName != "")
		{
			cout << "Your choice was: " << chosenName << endl;
		}
		else
		{
			cout << "Detected incorrect name input! Please try agian." << endl << endl;
			goto retry;
		}


		//RACE

		cout << "Please enter the corresponding integer input for the character race you want to select: " << endl << endl
			<< "\t 1 - Human: Homo Sapiens, an intelligent, but fragile being" << endl
			<< "\t 2 - Elf: Decendant of the human, still intelligent, and even more agile" << endl
			<< "\t 3 - Dwarf: Mutated from humans, clumsy but robust creatures" << endl
			<< "\t 4 - Orc: Evil mutation of humans, dumb, but has incredible brute strength" << endl
			<< "\t 5 - Troll: Mythic creature with a stone-like skin, has incredible reach and excells in battle when triggered" << endl
			<< "\t 6 - Goblin: Small but respectable orcs, extremely intelligent, but suffers from their small size" << endl;

		cin >> currentRaceChoice;

		//Range requested for legal input
		if (currentRaceChoice >= 1 && currentRaceChoice <= 6)
		{
			cout << "Your choice was: " << currentRaceChoice << endl;
		}
		else
		{
			cout << "Detected incorrect integer input! Please try agian." << endl << endl;
			goto retry;
		}

		Race race;

		switch (currentRaceChoice)
		{
		case 1:
			race = Race::HUMAN;
			break;
		case 2:
			race = Race::ELF;
			break;
		case 3:
			race = Race::DWARF;
			break;
		case 4:
			race = Race::ORC;
			break;
		case 5:
			race = Race::TROLL;
			break;
		case 6:
			race = Race::GOBLIN;
			break;
		default: 
			goto retry;
		}

		Player* playerCharacter;

		switch (currentClassChoice)
		{
		case 1: 
			playerCharacter = new Warrior(chosenName, race);
			break;
		case 2:
			playerCharacter = new Priest(chosenName, race);
			break;
		case 3: 
			playerCharacter = new Mage(chosenName, race);
			break;
		case 4:
			playerCharacter = new Monk(chosenName, race);
			break;
		default:
			goto retry;
		}

		characterVector.emplace_back(playerCharacter);

		currentClassChoice = 0;
		chosenName = "";
		currentRaceChoice = 0;

		int shouldContinue = 0;
		cout << "Character created! Do you want to keep creating even more characters? Enter 1 to continue, or something else to view created characters:" << endl << endl;
		
		cin >> shouldContinue;

		if (shouldContinue != 1) running = false;

	}
	printCharacters(characterVector);
	deleteCharacters(characterVector);

}

void printCharacters(vector<Player*>& characterVector)
{	
	for (int i = 0; i < characterVector.size(); i++)
	{
		cout << "Character number " << i+1 << endl;
		printCharacter(characterVector.at(i));
	}
}

void deleteCharacters(vector<Player*>& characterVector)
{
	for (int i = 0; i < characterVector.size(); i++)
	{
		delete characterVector.at(i);
		characterVector.at(i) = nullptr;
	}
}

void printCharacter(Player* character)
{	
	cout << "Character name:" << character->getName() << endl <<
		"\t" << "HP: " << character->getHitPoints() << endl <<
		"\t" << "MP: " << character->getManaPoints() << endl <<
		"\t" << "Race: " << character->whatRace() << endl <<
		"\t" << "Attack-phrase: " << endl << "\t" << character->attack() << endl << endl;
}