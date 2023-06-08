#ifndef MONK_H
#define MONK_H

#include <string>
#include "Player.h"
using namespace std;

class Monk : public Player {
public:

	Monk(string name, Race race)
		: Player(name, race, 150, 150)
	{};

	string attack() const override
	{
		return "I will outsmart and kill you with my swift blows!";
	}

};

#endif 