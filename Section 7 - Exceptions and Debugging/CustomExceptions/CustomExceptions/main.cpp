#include <iostream>
#include "AngryCatException.h"
using namespace std;

void feedKitten(int numTreats);

int main()
{
	int numTreats = 0;
	
	cout << "How many do you want to feed the kitten?" << endl;

	cin >> numTreats;

	try
	{
		feedKitten(numTreats);
	}
	catch (const AngryCatException& err)
	{
		cerr << err.what() << endl;
	}
	//Since AngryCatEception is a runtime_error the catch of a runtime error must 
	//be placed beneath if this error is thrown in different settings as well.
	//The rule is to catch more specified exceptions first, then more general ones after. 

	return 0;
}

void feedKitten(int numTreats)
{
	if (numTreats < 3)
	{
		throw AngryCatException();
	}
	else if (numTreats < 6)
	{
		throw AngryCatException("Made kitten a little angry!");
	}
	cout << "Kitten is happy with " << numTreats << " treats."
		<< endl;

}