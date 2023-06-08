#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main() 
{
	//Animal animal1("Sam", 100); invalid after the Animal class has been made abstract

	Animal* dogPtr = new Dog("Grigo", 100, "Kooikerhundje");

	Animal* catPtr = new Cat("Milly", 10);

	cout << "Dog pointer noise: " << dogPtr->makeNoise() << endl;

	cout << "Dog pointer eat: " << dogPtr->eat() << endl << endl;

	cout << "Cat pointer noise: " << catPtr->makeNoise() << endl;

	cout << "Cat pointer eat: " << catPtr->eat() << endl;

	//Old way:
	//cout << "Cat pointer chaseMouse: " << ((Cat*)catPtr)->chaseMouse() << endl << endl;


	//New way:
	cout << "Cat pointer chaseMouse: " << (reinterpret_cast<Cat*>(catPtr))->chaseMouse() << endl << endl;

	//animal1.print();

	Dog dog1("Fido", 30, "Golden Retriever");

	dog1.print();

	cout << dog1.chaseKitty() << endl;

	dogPtr->print();

	delete dogPtr;
	dogPtr = nullptr;


	delete catPtr;
	catPtr = nullptr;


	return 0;

}