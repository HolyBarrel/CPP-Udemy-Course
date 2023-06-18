#include "Car.h"
#include <memory>
#include <iostream>
using namespace std;

int main()
{
	auto carPtr = make_unique<Car>("Green", 3);

	cout << "Pointer value color: " << carPtr->getColor() << endl;

	cout << "Pointer value number of doors: " << carPtr->getNumDoors() << endl;


	return 0;
}