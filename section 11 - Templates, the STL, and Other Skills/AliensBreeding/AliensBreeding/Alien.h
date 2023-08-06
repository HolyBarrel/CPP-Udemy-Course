#ifndef ALIEN_H
#define ALIEN_H

#include <random>


class Alien
{
	
public:
	Alien(int weight, int height, char gender);
	int getWeight() { return weight; }
	int getHeight() { return height; }
	char getGender() { return gender; }
	int getPrestige() const; 
	void print() const;

	bool operator==(const Alien& other) const;

	bool operator!=(const Alien& other) const;

	bool operator>(const Alien& other) const;

	bool operator>=(const Alien& other) const;

	bool operator<(const Alien& other) const;

	bool operator<=(const Alien& other) const;

	Alien operator+(const Alien& other) const;

	Alien& operator=(const Alien& other);

	static void initRandomGenerator() {
		generator.seed(std::random_device()());
	}

private:
	static std::mt19937 generator;
	int weight;
	int height;
	char gender;

	char generateGender() const;
};

#endif ALIEN_H