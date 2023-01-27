#include <iostream>
#include "Dog.h"
using namespace std; 

int main()
{
	int* myIntPtr = new int;
	*myIntPtr = 123; 

	bool* myBoolPtr = new bool;
	*myBoolPtr = false;

	cout << *myIntPtr << endl;

	cout << boolalpha << *myBoolPtr << endl;

	delete myIntPtr; 
	
	myIntPtr = nullptr; 

	Dog* dogPtr = new Dog("Rover", "German Sheperd");
	Dog* dogPtr2 = new Dog("Fido", "Beagle");

	cout << "Using arrow member access" << endl; 
	cout << dogPtr->getName() << " - - " << dogPtr->getBreed() << endl;
	cout << dogPtr2->getName() << " - - " << dogPtr2->getBreed() << endl;
	cout << endl;

	cout << "Using deref and dot operator" << endl;
	cout << (*dogPtr).getName() << " - - " << (*dogPtr).getBreed() << endl;
	cout << (*dogPtr2).getName() << " - - " << (*dogPtr2).getBreed() << endl;
	cout << endl;

	delete dogPtr; 
	delete dogPtr2;

	dogPtr = nullptr;
	dogPtr2 = nullptr;


	return 0; 

}