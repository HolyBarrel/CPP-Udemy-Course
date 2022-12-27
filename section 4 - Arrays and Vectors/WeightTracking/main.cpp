#include <iostream>
#include <string>
#include <vector>
using namespace std; 

int main()
{
	vector<string> names;
	vector<int> weights;

	for (int i = 0; i < 5; i++)
	{
		string name;
		cout << "Please enter a name:" << endl;
		getline(cin, name);
		names.push_back(name);

		int weight;
		cout << "Please enter " << names[i] << "'s weight in kg:" << endl;
		cin >> weight;
		cin.get();
		weights.push_back(weight);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "The " << i << ". person's name is: " << names[i] << "." << endl << names[i]
			<< " weights: " << weights[i] << " kg." << endl;
	}
}
