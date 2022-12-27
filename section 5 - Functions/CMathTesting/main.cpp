#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	int logTwoResult = log2(512);
	double cubicRoot = cbrt(99000);
	int truncatedVal = trunc(21.312);

	cout << "The binary logarithm of 512 is: " << logTwoResult << endl;
	cout << "The cubic root of 99000 is: " << cubicRoot << endl; 
	cout << "The truncated value for 21.312 is: " << truncatedVal << endl;
	return 0; 
}
