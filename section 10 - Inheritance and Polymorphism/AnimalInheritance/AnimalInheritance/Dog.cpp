#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
	this->breed = breed;
}

string Dog::getBreed() const 
{
	return breed;
}

string Dog::digHole() const
{
	return "The dog is diigging a hole.";
}


string Dog::chaseKitty() const
{
	return "The dog is chasing the kitty!";
}

string Dog::makeNoise() const
{
	return "Woof Woof!";
}

string Dog::eat() const
{
	return "The dog is eating dogfood!";
}

void Dog::print() const
{
	cout << "Animal type: Dog" << endl;
	Animal::print();
	cout << "The breed of the dog is: " << getBreed() << endl;
}