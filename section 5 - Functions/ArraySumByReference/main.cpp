#include <iostream>
#include <array>
using namespace std; 

void sumArray(array<int, 10> paramArr, int& sum);

int main()
{
	array<int, 10> array1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int sum = 0; 

	sumArray(array1, sum);

	cout << "The sum of the array is " << sum << endl;

	return 0; 
}

void sumArray(array<int, 10> paramArr, int& sum)
{
	for (int element : paramArr)
	{
		sum += element;
	}
}
