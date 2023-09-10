#include <iostream>
#include <stdexcept>
using namespace std;

int imBroken(int num1, int num2);

int main()
{
	int a; 

	try 
	{
		a = imBroken(10, 5);

		cout << a << endl;

		a = imBroken(10, 0);

		cout << a << endl;
	}
	catch (const invalid_argument& err)
	{
		cerr << err.what() << endl;
	}

	return 0;
}

int imBroken(int num1, int num2)
{
	if(num2 == 0) throw invalid_argument("Cannot devide by zero!");


	return num1 / num2;
}