#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> firstVector{ "Mary Jane", "Thomas Aker", "Joel Kimson", "Gray Greenson", "Axel Blue"};

	firstVector.insert(firstVector.begin() + 2, "John Baugh");

	firstVector.pop_back();

	for (string name : firstVector)
	{
		cout << name << endl;
	}
	return 0;
}