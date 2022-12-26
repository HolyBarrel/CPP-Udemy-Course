#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 5> inputArray{};

	for (int i = 0; i < inputArray.size(); i++)
	{
		cin >> inputArray[i];
	}

	for (int i : inputArray)
	{
		cout << i << " * 2 = " << i * 2 << endl;
	}

	return 0;
}
