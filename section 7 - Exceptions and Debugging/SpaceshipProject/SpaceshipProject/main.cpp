#include <iostream>
#include "WarpDriveOverheatingException.h"
using namespace std;

void warpTest(int temperature);

int main()
{

	try
	{
		warpTest(20);

		warpTest(40);

		warpTest(90);
	}
	catch (const WarpDriveOverheatingException& err)
	{
		cerr << err.what() << endl;
	}



	return 0;
}

void warpTest(int temperature)
{
	if(temperature > 80) 
	{
		throw WarpDriveOverheatingException();
	}
	else
	{
		cout << "Warp drive temperatures is below the safety threshold (80 deg)."
			<< endl;
	}
}