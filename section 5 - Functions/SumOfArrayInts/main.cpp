#include <iostream>
#include <array>
using namespace std; 

int sumArray(int inputArr[], int size);
int sumArray(array<int, 10> paramArray);

int main()
{
	const int ARRAY_SIZE = 10;

	int intArray[] = { 2, 4, 5, 3, 2, 1, 2, 4, 2, 10 };

	array<int, ARRAY_SIZE> objArray = { 2, 4, 5, 3, 2, 1, 2, 4, 2, 10 };


	cout << "The sum of the integers in the built in array is: " << sumArray(intArray, ARRAY_SIZE) <<  endl;

	cout << "The sum of the integers in the array object is: " << sumArray(objArray) << endl;

	return 0;
}

int sumArray(int inputArr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += inputArr[i];
	}

	return sum;
}

int sumArray(array<int, 10> paramArray)
{
	int sum = 0;
	for (int element : paramArray)
	{
		sum += element;
	}

	return sum; 
}
