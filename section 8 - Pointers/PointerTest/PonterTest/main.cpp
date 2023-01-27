#include <iostream>
using namespace std; 

int main()
{
	double myDouble = 3.14;
	double* doublePtr = &myDouble;
	int myInt = 150;
	int* somePtr = &myInt;

	cout << "My Integer is originally: " << myInt << endl; 
	cout << "SomePtr hold value: " << somePtr << endl;
	cout << "SomePtr deferenced: " << *somePtr << endl;

	*somePtr = 200; 

	cout << "My Integer is now: " << myInt << endl;

	cout << "Actual content of doublePtr: " << doublePtr << endl;
	cout << "DoublePtr deferenced: " << *doublePtr << endl;

	return 0; 
}