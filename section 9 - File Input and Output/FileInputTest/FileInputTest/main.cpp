#include <iostream>
#include <fstream>
#include <vector>
using namespace std; 

int main()
{
	ifstream infile; 
	infile.open("input.txt");

	int inputNumber; 
	int sum = 0;
	vector<int> numbers;

	while (!infile.eof())
	{
		infile >> inputNumber;
		sum += inputNumber;
		numbers.emplace_back(inputNumber);
	}

	cout << "The read numbers were: " << endl;
	for (auto& num : numbers) cout << num << endl;

	cout << "Sum of numbers: " << sum << endl;

	infile.close();

	return 0; 
}