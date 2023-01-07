#include <iostream>
#include <string>
#include "House.h"
using namespace std; 

/*
* Prev version
void printHouseData(const House& house);
*/

int main()
{
	House myHouse;

	myHouse.print();

	myHouse.setColor("red");
	myHouse.setNumStories(3);
	myHouse.setNumWindows(30);
	myHouse.print();

	//printHouseData(myHouse); //Prev

	return 0;
}
/*
* Prev version
* 
void printHouseData(const House& house)
{
	cout << "The house has the color " << house.getColor() << ". It has "
		<< house.getNumStories() << " stories and a total of " << house.getNumWindows() << " windows." << endl;
}
*/