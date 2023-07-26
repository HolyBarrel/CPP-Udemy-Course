#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
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

	Rectangle resultRectangle = r1 + r2;

	resultRectangle.print();

	cout << "r1 == r2? " << boolalpha << (r1 == r2) << endl;
	cout << "r1 == r1? " << (r1 == r1) << endl;
	cout << "r1 != r2? " << (r1 != r2) << endl;

	return 0;
}