#include <iostream>
#include <deque>
#include <string>
#include <stack>
#include <queue>
using namespace std;

void printDeque(deque<int> deck);

void storeReverse(string originalString, stack<char>& reverseStack);

bool isPalindrome(string originalString);

void printResult(string originalString);

void printAndRemoveFromQueue(queue<string> originalQueue);

void printRemovedElement(string element);

int main()
{

	cout << "Prints for testing the deque STL structure:" << endl << endl;
	deque<int> myDeck;

	myDeck.push_back(1);
	myDeck.push_back(5);
	myDeck.push_back(10);
	myDeck.push_back(20);

	cout << "First print:" << endl;

	printDeque(myDeck);

	myDeck.push_front(50);
	myDeck.push_front(70);

	cout << "Second print:" << endl;

	printDeque(myDeck);


	cout << "Prints for testing the stack STL structure:" << endl << endl;

	string strArray[5];
	strArray[0] = "racecar";
	strArray[1] = "fudge";
	strArray[2] = "civic";
	strArray[3] = "bob";
	strArray[4] = "dogs";

	for (string s : strArray)
	{
		printResult(s);
		cout << endl;
	}

	cout << "Prints for testing the queue STL structure:" << endl << endl;

	queue<string> line;

	line.push("John");
	line.push("Sally");
	line.push("Bob");
	line.push("Sam");
	line.push("Ali");
	line.push("Karem");

	printAndRemoveFromQueue(line);

	return 0;
}

void printDeque(deque<int> deck)
{
	for (int num : deck)
	{
		cout << num << endl;
	}
	cout << endl;
}

void storeReverse(string originalString, stack<char>& reverseStack)
{
	for (char c : originalString)
	{
		reverseStack.push(c);
	}
}

bool isPalindrome(string originalString)
{
	stack<char> reverseStack;
	storeReverse(originalString, reverseStack);

	bool result = true;

	if (originalString.length() == reverseStack.size())
	{
		for (char c : originalString)
		{
			char current = reverseStack.top();
			if (current != c) {
				result = false;
				break;
			}
			reverseStack.pop();
		}
	}
	else
	{
		result = false;
	}
	return result;
}

void printResult(string originalString)
{
	cout << "Is " << originalString << " a palindrome? \t" 
		<< boolalpha << isPalindrome(originalString) << endl;
}


void printAndRemoveFromQueue(queue<string> originalQueue)
{
	queue<string> otherQueue = originalQueue;
	while (!otherQueue.empty())
	{
		string current = otherQueue.front();
		otherQueue.pop();
		printRemovedElement(current);
	}
}

void printRemovedElement(string element)
{
	cout << "The element '" << element << "' was removed from the queue." << endl;
}