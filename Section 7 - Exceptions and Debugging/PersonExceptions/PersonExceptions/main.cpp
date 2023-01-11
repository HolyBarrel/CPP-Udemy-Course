#include <iostream>
#include <stdexcept>
#include "Person.h"
using namespace std;

int main()
{
	try
	{

		Person person1("Bob");
		Person person2("Sally");
		Person person3("");
		Person person4("WillIAm");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;

	}
	catch (const runtime_error& err)
	{
		cerr << err.what() << endl;
	}


	return 0;
}