#include <string>
#include "Swapper.h"
#include <iostream>
using namespace std;

template <class T>
T getSmaller(T a, T b);

int main()
{

	Swapper<int> integerSwapper(5, 10);
	Swapper<string> stringSwapper("Mister", "Misses");

	cout << "Testing the swappers | BEFORE SWAP: " << endl;

	cout << "Integer Swapper: "
		<< endl << "\t" << integerSwapper.getFirst()
		<< endl << "\t" << integerSwapper.getLast() << endl;

	cout << "String Swapper: "
		<< endl << "\t" << stringSwapper.getFirst()
		<< endl << "\t" << stringSwapper.getLast() << endl;

	integerSwapper.swap();
	stringSwapper.swap();

	cout << endl << endl << "Testing the swappers | AFTER SWAP: " << endl;

	cout << "Integer Swapper: "
		<< endl << "\t" << integerSwapper.getFirst()
		<< endl << "\t" << integerSwapper.getLast() << endl;

	cout << "String Swapper: "
		<< endl << "\t" << stringSwapper.getFirst()
		<< endl << "\t" << stringSwapper.getLast() << endl;

	cout << endl << "Testing the getSmaller template function:" << endl;

	cout << "Smallest double of 2.222 and 3.1415: " << getSmaller(2.222, 3.1415) << endl;

	return 0;
}

template <class T>
T getSmaller(T a, T b)
{
	if (a < b) return a;
	return b;
}