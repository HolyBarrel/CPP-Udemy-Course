#include <iostream>
using namespace std;

/*
* Small program that takes input of which subscription plan for monthly jam-purchases of the user.
* If the amount of purchased jams exceeds the maximum for a given subscription, each sub plan specifies 
* the additional price for more jams purchased in the month. The total cost accoring to the sub plan and 
* the amount of jams bought is printed.
*/
int main()
{
	char package;
	int numOfJams;
	cout << "Which of the packages 'A','B', or 'C' are you subscribing to?" << endl;
	cin >> package;
	cout << "How many jams did you purchase in total this month?" << endl;
	cin >> numOfJams;
	int baseFee = 0;
	int diff = 0;
	int additionalJamPrice = 0;

	/*
	* Switch-case to handle additional jam-purchases
	*/
	switch (package)
	{
	case 'A':
	case 'a':
		baseFee = 8;
		if (numOfJams > 2)
		{
			diff = numOfJams - 2;
			additionalJamPrice = 5;
		}
		break;
	case 'B':
	case 'b':
		baseFee = 12;
		if (numOfJams > 4)
		{
			diff = numOfJams - 4;
			additionalJamPrice = 4;
		}
		break;
	case 'C':
	case 'c':
		baseFee = 15;
		if (numOfJams > 6)
		{
			diff = numOfJams - 6;
			additionalJamPrice = 3;
		}
		break;
	default:
		cout << "The package chosen was invalid." << endl;
		break;
	}

	int cost = baseFee + diff * additionalJamPrice;

	cout << "Your total cost: " << cost << "$" << endl;
}