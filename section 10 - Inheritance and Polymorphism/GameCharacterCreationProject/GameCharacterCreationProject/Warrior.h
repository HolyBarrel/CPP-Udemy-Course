#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include "Player.h"
using namespace std;

class Warrior : public Player {
public:

	Warrior(string name, Race race)
		: Player(name, race, 300, 0)
	{};

	string attack() const override
	{
		return "I will destroy you with my mighty longsword!";
	}

};

#endif 