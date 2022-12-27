#include <iostream>
using namespace std; 

void passThreeTimesValue(int input, int& output);

int main()
{
	const int k = 10;

	int output = 0;

	passThreeTimesValue(k, output);

	cout << "passThreeTimesValue stored the value " << output << " in the output-variable." << endl;


	return 0;
}

void passThreeTimesValue(int input, int& output)
{
	output = 3 * input;
}
