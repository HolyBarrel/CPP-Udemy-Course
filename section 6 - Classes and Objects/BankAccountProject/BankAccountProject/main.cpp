#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main()
{
	BankAccount myAccount("Magnus", 10);

	myAccount.withdraw(3);

	myAccount.display();

	myAccount.deposit(-2);

	myAccount.deposit(299);

	myAccount.withdraw(3000);

	myAccount.withdraw(300);

	myAccount.withdraw(-1);


	//TESTING

	BankAccount faultyAccount("Maggie", -1);




	return 0; 
}