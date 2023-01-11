#include "Circle.h"

//const double PI = 3.14;

Circle::Circle() : PI(3.14159)
{
	this->radius = 1.0;
}

Circle::Circle(double radius) : PI(3.14159)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::circumference() const
{
	return 2 * PI * radius;
}

double Circle::area() const
{
	return PI * radius * radius;
}