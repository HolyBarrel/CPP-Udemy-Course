#include "House.h"
#include <iostream>
#include <string>
using namespace std; 

House::House()
{
	this->numStories = 1;
	this->numWindows = 4;
	this->color = "white";
}

House::~House() 
{
	cout << "The " << color << " house with " << numStories << " stories and "
		<< numWindows << " windows is being destroyed!";
}

void House::setNumStories(int numStories)
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

int House::getNumStories() const
{
	return this->numStories;
}

int House::getNumWindows() const
{
	return this->numWindows;
}

string House::getColor() const
{
	return this->color;
}

void House::print() const
{
	cout << "The house has the color " << color << ". It has "
		<< numStories << " stories and a total of " << numWindows << " windows." << endl;
}