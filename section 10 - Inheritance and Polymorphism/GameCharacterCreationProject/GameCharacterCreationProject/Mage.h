#ifndef MAGE_H
#define MAGE_H

#include <string>
#include "Player.h"
using namespace std;

class Mage : public Player {
public:

	Mage(string name, Race race)
		: Player(name, race, 120, 180)
	{};

	string attack() const override
	{
		return "I will blast your soul to smitherines with my graceful magic!";
	}

};

#endif 