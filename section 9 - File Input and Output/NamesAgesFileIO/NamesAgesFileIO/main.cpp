#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main()
{
	ifstream nameFile;
	ifstream ageFile;
	ofstream outFile;

	string tempName; 
	int tempAge; 

	cout << "Opening files.." << endl;

	nameFile.open("names.txt");
	ageFile.open("ages.txt");
	outFile.open("output.txt");

	//Error-checking
	if (!nameFile)
	{
		cerr << "Did not locate the name file.. terminating process.." << endl;
		return 1; 
	}

	//Error-checking 
	if (!ageFile)
	{
		cerr << "Did not locate the age file.. terminating process.." << endl;
		return 1;
	}

	//Iterating and concating information into new file
	while (!nameFile.eof() && !ageFile.eof())
	{
		getline(nameFile, tempName);
		ageFile >> tempAge;
		outFile << tempName << " is " << tempAge << " years old." << endl;
	}

	nameFile.close();
	ageFile.close();
	outFile.close();

	cout << "The file streams are done working" << endl;
}