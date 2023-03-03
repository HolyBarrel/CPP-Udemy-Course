#include <map>
#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

int main()
{
	ifstream inStream;
	string tempString;

	cout << "Opening file.." << endl;

	inStream.open("items.txt");

	//Error-checking
	if (!inStream)
	{
		cerr << "Did not locate the numbers file.. terminating process.." << endl;
		exit(1);
	}

	map<string, int> map;

	//Iterating and concating information into new file
	while (!inStream.eof())
	{
		getline(inStream, tempString);

		if (map.find(tempString) != map.end())
		{
			map.find(tempString)->second++;
		}
		else {
			map.insert(make_pair(tempString, 1));
		}
		
	}
	inStream.close();

	cout << "The file stream is done working" << endl;

	cout << "Printing the shopping items and their corresponing frequencies: " << endl;

	for (auto& item : map)
	{
		cout << "Item: " + item.first << "\n Count: " << item.second;
		cout << endl;
	}

	return 0; 

}