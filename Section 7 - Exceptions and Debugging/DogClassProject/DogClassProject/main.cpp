#include <iostream>
#include <stdexcept>
#include "Dog.h"

Dog createDog(string breed);

int main()
{

	//SOLUTON 1
	try 
	{
		Dog dog1("Poodle");
	} 
	catch (runtime_error err) 
	{
		cerr << "The program failed with the message: " << err.what() << endl;
	}

	try
	{
		Dog dog2("Kooikerhundje");
	}
	catch (runtime_error err)
	{
		cerr << "The program failed with the message: " << err.what() << endl;
	}
	try
	{
		Dog dog3("Golden Retriever");
	}
	catch (runtime_error err)
	{
		cerr << "The program failed with the message: " << err.what() << endl;
	}

	//SOLUTON 2

	Dog dog1 = createDog("poodle");

	Dog dog2 = createDog("Dog2");

	Dog dog3 = createDog("Dalmatian");

	cout << dog3.getBreed() << endl;

	return 0;
}

Dog createDog(string breed)
{
	try
	{
		Dog dog(breed);
		return dog;
	}
	catch (runtime_error err)
	{
		cerr << "The program failed with the message: " << err.what() << endl;
	}
}