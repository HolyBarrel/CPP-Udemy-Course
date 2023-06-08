#include "Player.h"
#include <string>
using namespace std;

Player::Player(string name, Race race, int hitPoints, int manaPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->manaPoints = manaPoints;
}

string Player::getName() const
{
	return name;
}

Race Player::getRace() const
{
	return race;
}

string Player::whatRace() const
{
	Race thisRace = this->getRace();

	if (thisRace == Race::HUMAN) return "human";
	if (thisRace == Race::ELF) return "elf";
	if (thisRace == Race::DWARF) return "dwarf";
	if (thisRace == Race::ORC) return "orc";
	if (thisRace == Race::TROLL) return "troll";
	if (thisRace == Race::GOBLIN) return "goblin";
	return "unknown";

}

//HUMAN, ELF, DWARF, ORC, TROLL, GOBLIN


int Player::getHitPoints() const
{
	return hitPoints;
}

int Player::getManaPoints() const
{
	return manaPoints;
}

void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(Race race)
{
	this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void Player::setManaPoints(int manaPoints)
{
	this->manaPoints = manaPoints;
}