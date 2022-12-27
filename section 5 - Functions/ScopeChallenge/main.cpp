#include <iostream>
using namespace std; 

int counter = 0;

void modifyGlobal();

int main()
{
	cout << "couter before for-loop: " << counter << endl;

	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}

	cout << "couter after for-loop: " << counter << endl;
	
	return 0;
}

void modifyGlobal()
{
	counter++;
}
