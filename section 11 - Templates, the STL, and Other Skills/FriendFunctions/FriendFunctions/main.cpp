#include <iostream>
#include "Rectangle.h"
#include "RectangleHelper.h"
using namespace std;

int main()
{
	RectangleHelper helper;
	Rectangle r1(10, 25);

	cout << "r1 area: " << r1.area() << endl;

	changeData(r1);

	cout << "r1 area after changeData: " << r1.area() << endl;

	helper.modifyRectangle(r1);

	cout << "r1 area after RectangleHelper.modifyRectangle(r1): " << r1.area() << endl;

	printData(r1);

	return 0;
}

void changeData(Rectangle& rect)
{
	rect.width = 100;
	rect.length = 100;
}

void printData(Rectangle& rect)
{
	cout << "Rectangle data: " << endl
		<< "Length: " << rect.length << endl
		<< "Width: " << rect.width << endl
		<< "Area: " << rect.area() << endl;
}