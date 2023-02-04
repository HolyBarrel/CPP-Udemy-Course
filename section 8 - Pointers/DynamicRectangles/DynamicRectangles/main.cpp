#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	//OLD code see: https://github.com/HolyBarrel/CPP-Udemy-Course/blob/main/section%206%20-%20Classes%20and%20Objects/RectangleClass/RectangleClass/main.cpp
	Rectangle r1;
	Rectangle r2(5.1, 2.0);

	cout << "r1 area: " << r1.area() << endl;
	cout << "r2 area: " << r2.area() << endl;

	cout << "r2 perimeter: " << r2.perimeter() << endl;

	r1.setLength(22);
	r1.setWidth(12);

	cout << "r1 length is now: " << r1.getLength() << endl;
	cout << "r1 width is now: " << r1.getWidth() << endl;
	cout << "r1 area is now: " << r1.area() << endl << endl;

	r1.print();
	r2.print();

	//

	//NEW code:

	cout << endl << endl << "New code: " << endl;

	Rectangle* rectPtrsArr[3];

	rectPtrsArr[0] = new Rectangle();
	rectPtrsArr[1] = new Rectangle(2,2);
	rectPtrsArr[2] = new Rectangle(3.1415, 9);

	for (Rectangle* ptr : rectPtrsArr)
	{
		ptr->print();
		delete ptr; 
		ptr = nullptr;
	}

	return 0;
}