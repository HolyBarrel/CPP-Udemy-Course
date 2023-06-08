#ifndef PRIEST_H
#define PRIEST_H

#include <string>
#include "Player.h"
using namespace std;

class Priest : public Player {
public:

	Priest(string name, Race race)
		: Player(name, race, 100, 200)
	{};

	string attack() const override
	{
		return "I will annihilite your foul body with the divine powers of the gods!";
	}

};

#endif 