#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(string name, double weight) : Animal(name, weight)
{
}

string Cat::chaseMouse() const
{
	return "The cat is chasing the mouse!";
}

string Cat::makeNoise() const
{
	return "Meaow Meeeoow!";
}

string Cat::eat() const
{
	return "The cat is eating catfood!";
}

void Cat::print() const
{
	cout << "Animal type: Cat" << endl;
	Animal::print();
}