#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

char getLetterGrade(int percent);

int main()
{

	try {
		char greatGrade = getLetterGrade(99);

		cout << greatGrade << endl;

		char faultyGrade = getLetterGrade(-2);
	}
	catch (const out_of_range& err)
	{
		cerr << err.what() << endl;
	}

	return 0;

}

char getLetterGrade(int percent)
{

	const int p = percent;
	string pStr = to_string(p);

	if (p > 100 || p < 0) 
		throw out_of_range("The specified percent " + 
			pStr + " was outside the legal interval for grades [0,100]. Please try again.");

	//Checking the valid ranges by upper bounds
	if (p <= 59) return 'F';
	if (p <= 69) return 'D';
	if (p <= 79) return 'C';
	if (p <= 89) return 'B';
	if (p <=100) return 'A';

}