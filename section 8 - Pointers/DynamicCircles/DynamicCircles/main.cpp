#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	//NEW code: 

	cout << endl << endl << "New code: " << endl;

	int numberOfCircles = -1;

	while (numberOfCircles < 1)
	{
		cout << "Please enter an integer for a number for circles contained in an array:" << endl;
		cin >> numberOfCircles;
		if (numberOfCircles < 1) cout << "Wrong input, please retry!" << endl;
	}

	Circle** circlePtrArray = new Circle*[numberOfCircles];

	for (int i = 0; i < numberOfCircles; i++) 
	{
		double radius = -1;

		while (radius <= 0)
		{
			cout << "Please enter a double radius for the " << i << ". circle in the array." << endl;
			cin >> radius;
			if (radius <= 0) cout << "Wrong input, please retry!" << endl;
		}
		circlePtrArray[i] = new Circle(radius);
	}

	for (int i = 0; i < numberOfCircles; i++)
	{
		cout << "Info on circle number " << i << " with radius " << circlePtrArray[i]->getRadius() << endl;
		cout << "\t" << circlePtrArray[i]->circumference() << endl;
		cout << "\t" << circlePtrArray[i]->area() << endl;
	}

	for (int i = 0; i < numberOfCircles; i++)
	{
		delete circlePtrArray[i];
		circlePtrArray[i] = nullptr;
	}

	delete circlePtrArray;
	circlePtrArray = nullptr;

	return 0;
}

