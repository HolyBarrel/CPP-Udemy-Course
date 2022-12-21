#include <iostream>
#include <string> 
using namespace std;

int main() {
	string adj1, girlName, adj2, occupation1, placeName, clothingType, 
		hobby, adj3, occupation2, boysName, mansName;

	string adj = "Please enter a string for an adjective: ";
	string occupation = "Please enter a string for an occupation: ";

	cout << adj << endl;
	getline(cin, adj1);
	cout << "Please enter a string for a girls name: " << endl;
	getline(cin, girlName);
	cout << adj << endl;
	getline(cin, adj2);
	cout << occupation << endl;
	getline(cin, occupation1);
	cout << "Please enter a string for a name of a place: " << endl;
	getline(cin, placeName);
	cout << "Please enter a string for a type of clothing: " << endl;
	getline(cin, clothingType);
	cout << "Please enter a string for a hobby: " << endl;
	getline(cin, hobby);
	cout << adj << endl;
	getline(cin, adj3);
	cout << occupation << endl;
	getline(cin, occupation2);
	cout << "Please enter a string for a boys name: " << endl;
	getline(cin, boysName);
	cout << "Please enter a string for a mans name: " << endl;
	getline(cin, mansName);

	cout << "There once was a " << adj1 << 
		" girl named " << girlName << " who was a " << adj2 << " " << 
		occupation1 << " in the Kingdom of " << placeName << 
		". She loved to wear " << clothingType << " and " << hobby << 
		". She wanted to marry the " << adj3 << " " << occupation2 << 
		" named " << boysName << " but her father, King " << 
		mansName << " forbid her from seeing him." << endl;

	return 0;
}