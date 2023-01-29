#include <iostream>
using namespace std; 

void printArray(int* arrayPtr, int size);

int main()
{
	//old: const int ARR_SIZE = 5;

	//The array pointer is treated as an array, and the pointer points to the first index position
	int size = -1;
	while (!(size > 0)) //implemented short version of priming reads w/out bool
	{
		//prompting user contiously (priming reads)
		cout << "Please enter a positive integer to assign a max-size to the array with muliples of 2:" << endl;

		cin >> size;
	}

	int* myArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		myArray[i] = i * 2;
	}

	printArray(myArray, size);

	delete[] myArray;


}

void printArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}