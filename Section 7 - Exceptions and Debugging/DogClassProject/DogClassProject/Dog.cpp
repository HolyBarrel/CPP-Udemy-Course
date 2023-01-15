#include <stdexcept>
#include "Dog.h"
using namespace std;

Dog::Dog(string breed)
{
	if (breed == "")
	{
		throw runtime_error("The breed cannot be entered as an empty string ''. Please try again.");
	}
	else if (breed == "Poodle" || breed == "poodle")
	{
		throw runtime_error("Poodles are not dogs! Please try again.");
	}
	else
	{
		this->breed = breed;
	}
}

string Dog::getBreed() const noexcept
{
	return breed;
}