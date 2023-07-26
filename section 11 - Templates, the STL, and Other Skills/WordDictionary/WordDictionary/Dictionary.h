#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Dictionary
{
public:
	Dictionary()
	{}

	void addDefinition(string word, string definition)
	{
		dictionary.insert(pair<string, string>(word, definition));
	}

	string getDefinition(string word)
	{
		string definition = "NOT FOUND";

		const auto elementFound = dictionary.find(word);

		if (elementFound != dictionary.end()) definition = elementFound->second;

		return definition;
	}

	void printAll()
	{
		cout << "Dictionary:\n\n Word \t\t\tDefinition"<< endl;
		for(auto element : dictionary)
		{
			cout << element.first << " \t\t\t" << element.second << endl;
		}
	}

	int size()
	{
		return dictionary.size();
	}

private:
	map <string, string> dictionary;


};


#endif