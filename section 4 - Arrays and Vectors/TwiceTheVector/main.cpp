#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int enteredNum = 1;

	vector<int> twiceVector;

	while (enteredNum > -1)
	{	
		cout << "Please enter a positive integer to add to the vector," 
			<< endl << " or a negative integer to print twice the entered integers: " << endl;

		cin >> enteredNum;
		twiceVector.push_back(enteredNum);
	}

	for (int i : twiceVector)
	{
		cout << i << " * 2 = " << i * 2 << endl;
	}

	return 0;
}
