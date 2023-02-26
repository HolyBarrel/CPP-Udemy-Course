#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	this->length = 1.0;
	this->width = 1.0;
}

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setLength(double length)
{
	this->length = length;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::area() const
{
	return length * width;
}

double Rectangle::perimeter() const
{
	return 2 * length + 2 * width;
}

void Rectangle::print() const
{
	cout << "\nRectangle: " << length << "m long and "
		<< width << "m wide. " << endl << "\tArea: " << area() << endl
		<< "\tPerimeter: " << perimeter() << endl;
}

string Rectangle::getInfo() const
{
	return "\nRectangle: " + to_string(length) + "m long and "
		+ to_string(width) + "m wide. \n\tArea: " + to_string(area()) + "\n"
		+ "\tPerimeter: " + to_string(perimeter()) + "\n";
}