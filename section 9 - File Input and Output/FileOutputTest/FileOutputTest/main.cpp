#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void printFormatted(ofstream& stream, int upperBound);

int main()
{
	ofstream outfile;

	cout << "Writing to file..." << endl;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	int cap = -1;

	while (cap < 10)
	{
		cout << "Please enter an integer value above 10:" << endl;
		cin >> cap;
		if (cap < 10) cout << "Wrong input. Please retry" << endl;
	}

	printFormatted(outfile, cap);

	outfile.close();

	cout << "Done!" << endl;

	return 0;
}

void printFormatted(ofstream& stream, int upperBound)
{
	for (int i = 1; i < upperBound; i++)
	{
		stream << setw(12) << setprecision(2) << (i * 2.71828)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 2.71828)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
}