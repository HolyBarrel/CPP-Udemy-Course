#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"
using namespace std;

class Dog : public Animal {
public:

	Dog(string name, double weight, string breed);

	string getBreed() const;

	string digHole() const;

	string chaseKitty() const;

	string makeNoise() const override;

	string eat() const override;

	void print() const override;

private:
	string breed;
};

#endif 