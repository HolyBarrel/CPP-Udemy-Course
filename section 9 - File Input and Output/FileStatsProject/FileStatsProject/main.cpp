#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream numFile;

	int tempNum;

	int min = 101;
	int max = 0; 
	int sum = 0;

	cout << "Opening file.." << endl;

	numFile.open("scores.txt");

	//Error-checking 
	if (!numFile)
	{
		cerr << "Did not locate the numbers file.. terminating process.." << endl;
		return 1;
	}

	//Iterating and concating information into new file
	int count = 0;
	while (!numFile.eof())
	{
		numFile >> tempNum;
		if (tempNum >= 0 && tempNum <= 100) {
			sum += tempNum;
			if (tempNum < min) min = tempNum;
			if (tempNum > max) max = tempNum;
			++count;
		}
		else {
			cout << "[An entry was ignored being outside (0,100)]" << endl;
		}
	}
	numFile.close();

	cout << "The file stream is done working" << endl;

	if (min == 101)
	{
		cout << "The file only contained scores outside of the requested interval, or no scores at all!" << endl; 
	}
	else
	{
		cout << "Statistics for the file: " << endl <<
			"\t max: " << max << endl <<
			"\t min: " << min << endl <<
			"\t avg: " << (double) sum / count << endl;
	}
}