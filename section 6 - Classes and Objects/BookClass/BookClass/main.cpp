#include <iostream>
#include "Book.h"
using namespace std;

void printBookDetails(const Book& book);

int main()
{
	Book gameOfThrones("George Martin", "Game of Thrones",
		"Fantasy", 864);

	Book mathBook("James Stewart", "Calculus", "Math",
		1392);

	Book cppBook("Bjarne Stroustrup", "The C++ Programming Language",
		"Programming", 1376);

	gameOfThrones.print();
	mathBook.print();
	cppBook.print();

	//Old version before 'print' function was integrated 
	// as a member function.
	// 
	//printBookDetails(gameOfThrones);
	//printBookDetails(mathBook);
	//printBookDetails(cppBook);

	return 0;
}

void printBookDetails(const Book& book)
{
	cout << book.getTitle() << " by " << book.getAuthor()
		<< " has " << book.getNumPages() << " pages, "
		<< "and is in the genre '" << book.getGenre() << "'."
		<< endl; 
}