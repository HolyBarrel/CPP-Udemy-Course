#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned) time(0));

	int guesses = 0;

	int r = (rand() % 101);

	int guess = -1;

	while (guess != r)
	{
		cout << "Please enter an integer guess below." << endl << "Hint! The solution is an integer in the interval: [0,100]." << endl;
		cin >> guess;

		if (guess >= 0 && guess <= 100)
		{
			if (guess == r)
			{
				cout << "You guessed the correct integer number being: " << r << endl;
				break;
			}
			else if (guess > r)
			{
				cout << "The number is smaller than what you guessed. Please guess again." << endl;
			}
			else if (guess < r)
			{
				cout << "The number is greater than what you guessed. Please guess again." << endl;
			}
		}
		else
		{
			cout << "You wasted a guess by inputting a number outside the requested interval. Please guess again." << endl;
		}
		guesses++;
		cout << "Current number of guesses: " << guesses << endl;
	}
	cout << "You won the game in " << guesses <<  " guesses." << endl;

	return 0;
}