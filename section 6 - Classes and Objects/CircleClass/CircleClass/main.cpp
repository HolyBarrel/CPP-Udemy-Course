#include <iostream>
#include "Circle.h"
using namespace std; 

void printCircle(Circle& circle);

int main()
{
	Circle c1(2.2);
	Circle c2;

	printCircle(c1);
	printCircle(c2);

	return 0;
}

void printCircle(Circle& circle)
{
	cout << "A circle with radius " << circle.getRadius() << " has circumference "
		<< circle.circumference() << " and area " << circle.area() << endl;
}