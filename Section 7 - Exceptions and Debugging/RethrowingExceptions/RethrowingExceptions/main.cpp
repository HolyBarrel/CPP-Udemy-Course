#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void processPositive(int num);

void interpretNumber(int num);

int main()
{
	string input = "";
	bool exit = false;
	cout << endl << "Please enter an integer to process. Above 100 or"
		<< endl << " negative integers will generate exceptions."
		<< endl;
	cout << "Enter 'x' to quit" << endl;
	while(!exit)
	{ 
		cout << endl;
		cin >> input;
		if (input != "x")
		{
			try
			{
				interpretNumber(stoi(input));
			}
			catch (const out_of_range& err)
			{
				cerr << err.what() << endl;
				cout << "Finished by finding a number that was too large. " << endl;
			}
			catch (const invalid_argument& err) {
				cerr << err.what() << endl;
				cout << "Finished by finding a negative number. " << endl;
			}
		}
		else
		{
			exit = true;
		}

	}

	return 0;
}

void processPositive(int num)
{
	if (num >= 0 && num < 101) {
		cout << "'processPositive': The processed number '" << num << "' is in fact a positive integer." << endl;
	}
	else if (num > 100){
		string number = to_string(num);
		throw out_of_range("'processPositive': The processed number '" + number + "' was too large (> 100).");
	}
	else
	{
		string number = to_string(num);
		throw invalid_argument(
			"'processPositive': The processed number '" + number + "' was not a positive integer.");
	}
}

void interpretNumber(int num)
{
	try
	{
		processPositive(num);
		cout << "Finished by finding positive number." << endl;
		return;
	}
	catch (const out_of_range& err)
	{
		throw; //Rethrowing out of range exception
	}
	catch (const invalid_argument& err)
	{
		throw; //Rethrowing invalid argument exception
	}
}