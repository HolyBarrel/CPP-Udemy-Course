#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream numFile;
	ofstream outFile;

	int tempNum;

	cout << "Opening file.." << endl;

	numFile.open("numbers.txt");
	outFile.open("output.txt");

	//Error-checking 
	if (!numFile)
	{
		cerr << "Did not locate the numbers file.. terminating process.." << endl;
		return 1;
	}

	//Iterating and concating information into new file
	while (!numFile.eof())
	{
		numFile >> tempNum;
		outFile << 2 * tempNum << endl;
	}
	numFile.close();
	outFile.close();

	cout << "The file stream is done working" << endl;
}