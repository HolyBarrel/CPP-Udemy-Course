#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}


void Animal::setName(string name)
{
	this->name = name;
}

void Animal::setWeight(double weight)
{
	this->weight = weight;
}

string Animal::getName() const
{
	return this->name;
}

double Animal::getWeight() const
{
	return this->weight;
}

void Animal::print() const
{
	cout << "The animal is called " << name << ". It has a total weight of:  "
		<< weight << "KG. The animal makes the noise:'" << makeNoise() << "'" << endl;
}