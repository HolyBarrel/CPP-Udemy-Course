#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

enum Race { HUMAN, ELF, DWARF, ORC, TROLL, GOBLIN };

class Player {
public:

	Player(string name, Race race, int hitPoints, int manaPoints);

	string getName() const;

	Race getRace() const;

	string whatRace() const;

	int getHitPoints() const;

	int getManaPoints() const;

	void setName(string name);

	void setRace(Race race);

	void setHitPoints(int hitPoints);

	void setManaPoints(int manaPoints);

	virtual string attack() const = 0; //Uses pure specifier --> is an abstract method

private:
	string name;
	Race race;
	int hitPoints;
	int manaPoints;

};

#endif 