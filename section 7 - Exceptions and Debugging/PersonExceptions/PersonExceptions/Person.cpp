#include <stdexcept>
#include "Person.h"
using namespace std;

Person::Person(string name)
{
	setName(name);
}

string Person::getName() const noexcept
{
	return name;
}

void Person::setName(string name)
{
	if (name != "")
	{
		this->name = name;
	}
	else
	{
		throw runtime_error("The name cannot be entered as an empty string ''. Please try again.");
	}
}