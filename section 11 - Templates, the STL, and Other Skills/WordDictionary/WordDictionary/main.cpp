#include <iostream>
#include <string>
#include "Dictionary.h"
#include <limits>
using namespace std;

void run();

//The task is found in the PDF under the resource-folder

int main()
{
	run();

	return 0;
}

void run()
{
	bool running = true;

	cout << "Welcome to the Dictionary app" << endl;
	int currentMenuChoice = 0;
	Dictionary dictionary;

	while (running)
	{
		currentMenuChoice = 0;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		cout << "Please enter your choice: " << endl << endl
			<< "\t 1 - Add a word definition" << endl
			<< "\t 2 - Get the definition of a word" << endl
			<< "\t 3 - Print all definitions" << endl
			<< "\t 4 - Exit" << endl;

		cin >> currentMenuChoice;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Range requested for legal input
		if (currentMenuChoice >= 1 && currentMenuChoice <= 3)
		{
			cout << "Your choice was: " << currentMenuChoice << endl;

			bool keepAdding = true;
			string word;
			switch (currentMenuChoice)
			{
		
			case 1:
				while (keepAdding)
				{
				
					cout << "Please add the word below:" << endl;
					getline(cin, word);

					string definition;
					cout << "Please add the definition for the word '" << word << "'" << endl;
					getline(cin, definition);

					//adds to dictionary
					dictionary.addDefinition(word, definition);

					cout << "Entry created! Do you want to keep adding words? Enter 1 to continue, or something else to go back:" << endl << endl;
					int addWordSignifier = 0;
					cin >> addWordSignifier;
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
					if (addWordSignifier != 1) keepAdding = false;
				}
				break;

			case 2:
				cout << "You have chosen to Get the definition of a word." << endl;
				cout << "Please add the word below:" << endl;
				getline(cin, word);

				cout << "Result for word '" << word << "': \n\t" << dictionary.getDefinition(word) << endl;
				
				break;
			case 3:
				if(dictionary.size() > 0)
				{
					dictionary.printAll();
				}
				else
				{
					cout << "The dictionary is empty. Add some words with definitions and try again =)" << endl;
				}
				break;
			default:
				// Default case will never be reached because of the if condition, but it's good practice to include it.
				cout << "Invalid choice. Please choose between 1 and 3." << endl;
				break;
			}

		}
		else if (currentMenuChoice == 4)
		{
			cout << "Exiting the application.." << endl;
			break;
		}
		else
		{
			cout << "Detected incorrect integer input! Please try again." << endl << endl;
		}

	}

}