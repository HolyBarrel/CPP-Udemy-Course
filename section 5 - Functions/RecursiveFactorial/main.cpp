#include <iostream>
using namespace std; 

int factorial(int number);

int main()
{
	const int NUMBER = 6;
	cout << NUMBER << "! = " << factorial(NUMBER) << endl;

	return 0;
}

int factorial(int number)
{

	if (number == 1)
	{
		return 1;
	}
	return number * factorial(number-1);
}
