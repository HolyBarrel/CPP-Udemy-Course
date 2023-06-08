#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
public:

	Animal(string name, double weight);

	string getName() const;

	void setName(string name);
	
	double getWeight() const;

	void setWeight(double weight);

	//virtual-> Enables late binding for the method --> making it able to be bind the function during runtime
	//This enables polymorphism
	virtual string makeNoise() const = 0; //Uses pure specifier
	//The method is now a 'pure virtual' function --> makes the Animal class abstract

	virtual string eat() const = 0; //Uses pure specifier

	virtual void print() const;

private:
	string name;
	double weight;
};

#endif 