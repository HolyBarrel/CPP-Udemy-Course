#include <iostream>
#include <string>
using namespace std;

int main()
{
	enum Direction { UP, DOWN, LEFT, RIGHT, STANDING };

	Direction firstDirection = UP;

	cout << "Direction: " << firstDirection << endl;

	if (firstDirection == UP) cout << "The character is moving UP" << endl;

	firstDirection = STANDING;

	if (firstDirection == STANDING) cout << "The character is standing still" << endl;

	return 0;

}