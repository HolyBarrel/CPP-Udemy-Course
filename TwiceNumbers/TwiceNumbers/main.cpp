#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 10> firstArray{};

	for (int i = 0; i < firstArray.size(); i++)
	{
		firstArray[i] = i * 2;
	}

	for (int num : firstArray)
	{
		cout << num << endl;
	}

	return 0;
}