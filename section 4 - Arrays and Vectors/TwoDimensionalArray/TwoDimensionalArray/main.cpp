#include <iostream>
using namespace std; 

int main()
{
	int nums[2][3]
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << nums[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int row = 1; row >= 0; row--)
	{
		for (int col = 2; col >= 0; col--)
		{
			cout << nums[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}