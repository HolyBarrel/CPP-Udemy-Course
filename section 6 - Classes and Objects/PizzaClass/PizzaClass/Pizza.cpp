#include <iostream>
#include "Pizza.h"
using namespace std;


Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
	this->toppings.push_back("Cheese");
}

void Pizza::addTopping(string topping)
{
	this->toppings.push_back(topping);
}

string Pizza::getName() const
{
	return name;
}

int Pizza::getCost() const
{
	return cost;
}

int Pizza::getDiameter() const
{
	return diameter;
}

void Pizza::printToppings() const
{
	cout << "Toppings" << endl;
	for (auto topping : toppings)
	{
		cout << "\t" << topping << endl;
	}
}

void Pizza::printPizza() const
{
	cout << "Info about the pizza '" << name << "':" << endl
		<< "Cost: $" << cost << endl
		<< "Diameter: " << diameter << "cm" << endl;
	printToppings();
}
