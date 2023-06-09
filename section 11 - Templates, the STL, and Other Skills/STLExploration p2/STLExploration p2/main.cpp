#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void fillVector(vector<int>& paramVector);

void printVector(const vector<int>& paramVector);

void countFives(const vector<int>& paramVector);

int main()
{

	cout << "This is the prints for testing the map data structure of the STL: " << endl;
	map<string, string> contacts;

	contacts["John Beige"] = "331-222-2222";
	contacts["John Gray"] = "331-222-2345";
	contacts["John Green"] = "331-222-1111";


	cout << "Name    - - -    Number" << endl;
	for (auto e : contacts)
	{
		cout << e.first << " - - - " << e.second << endl;
	}

	cout << "This is the prints for testing the count algorithm of the STL: " << endl;

	vector<int> integerVector;

	fillVector(integerVector);

	printVector(integerVector);

	countFives(integerVector);

	cout << "This is the prints for testing the replace algorithm of the STL: " << endl;

	cout << "Replacing 5s with 99s" << endl;

	replace(integerVector.begin(), integerVector.end(), 5, 99);

	cout << "The new vector:" << endl;

	printVector(integerVector);

	countFives(integerVector);

	cout << "This is the prints for testing the sort algorithm of the STL: " << endl;

	sort(integerVector.begin(), integerVector.end());

	cout << "This is the sorted vector: " << endl;

	printVector(integerVector);

	return 0;
}

void fillVector(vector<int>& paramVector)
{
	//seed
	srand(time(nullptr));

	int temp;

	for (int i = 0; i < 20; i++)
	{
		temp = rand() % 5 + 1;
		paramVector.push_back(temp);
	}

}

void printVector(const vector<int>& paramVector)
{
	for (int element : paramVector)
	{
		cout << element << endl;
	}
	cout << endl;

}

void countFives(const vector<int>& paramVector)
{
	int numFives = count(paramVector.begin(), paramVector.end(), 5);

	cout << "Counted number of fives in vector:" << endl;

	cout << "\t" << numFives << endl;

}