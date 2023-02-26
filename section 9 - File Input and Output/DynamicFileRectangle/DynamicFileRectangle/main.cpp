#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>  
#include <vector>
#include "Rectangle.h"
using namespace std;

void getFileInput(string path, vector<int>& dimensions);

void sendInputToOutfile(vector<int>& dimensions);

int main()
{
	vector<int> dimensions;
	
	getFileInput("rectangles.txt", dimensions);

	sendInputToOutfile(dimensions);

	return 0;
}


void getFileInput(string path, vector<int>& dimensions)
{
	ifstream inStream;
	string tempString;

	cout << "Opening file.." << endl;

	inStream.open(path);

	//Error-checking
	if (!inStream)
	{
		cerr << "Did not locate the numbers file.. terminating process.." << endl;
		exit(1);
	}

	//Iterating and concating information into new file
	while (!inStream.eof())
	{
		getline(inStream, tempString);
		istringstream ss(tempString);

		string part;

		while (getline(ss, part, ' ')) dimensions.emplace_back(stoi(part));
	}
	inStream.close();

	cout << "The file stream is done working" << endl;
}


void sendInputToOutfile(vector<int>& dimensions)
{
	//OLD code see: https://github.com/HolyBarrel/CPP-Udemy-Course/blob/main/section%206%20-%20Classes%20and%20Objects/RectangleClass/RectangleClass/main.cpp
	vector<Rectangle*> rectangles;
	for (int i = 0; i < dimensions.size() - 1; i += 2)
	{
		rectangles.emplace_back(new Rectangle(dimensions[i], dimensions[i + 1]));
	}

	ofstream outFile;
	outFile.open("output.txt");


	for (Rectangle* ptr : rectangles)
	{
		ptr->print();
		outFile << ptr->getInfo();
		delete ptr;
		ptr = nullptr;
	}

	outFile.close();

	cout << "The outstream is done working" << endl;
}
