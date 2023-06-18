#include <iostream>
#include <memory>
using namespace std;

int main()
{
	const int ARR_SIZE = 5;

	unique_ptr<double> doublePtr = make_unique<double>();

	auto targetArray = make_unique<int[]>(ARR_SIZE);

	*doublePtr = 3.14;

	cout << "Pointer value: " << *doublePtr << endl;

	unique_ptr<double> otherPtr = move(doublePtr);

	cout << "The other pointer is now: " << *otherPtr << endl;

	for (int i = 0; i < ARR_SIZE; i++)
	{
		targetArray[i] = i * 2;
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << targetArray[i] << endl;
	}
}