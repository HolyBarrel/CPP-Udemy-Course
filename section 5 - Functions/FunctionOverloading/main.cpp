#include <iostream>
#include <string>
using namespace std; 

int getResult(int num1, int num2);
int getResult(int num);
string getResult(string str1, string str2);

int main()
{
	cout << "getResult from integers 10 and 20: " << getResult(10, 20) << endl;
	cout << "getResult from integer 7: " << getResult(7) << endl;
	cout << "getResult from strings 'Magnus' and 'Super': " << getResult("Magnus", "Super");

	return 0;
}


int getResult(int num1, int num2)
{
	return num1 * num2;
}

int getResult(int num)
{
	return num * num * num;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}
