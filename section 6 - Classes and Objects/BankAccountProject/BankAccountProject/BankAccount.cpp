#include <iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(string owner)
{
	this->owner = owner;
	this->balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	if (balance >= 0)
	{
		this->balance = balance;
	}
	else
	{
		cout << endl <<"You must enter a balance which is greater than or equal to zero." << endl;
	}
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		this->balance += amount;

		cout << endl << "Successful deposit of: " << amount << endl
			<< "New balance: " << this->balance << endl;
	}
	else
	{
		cout << endl << "Aborted withdrawal due to requested amount being zero or less."
			<< endl << "Your balance: " << this->balance << endl;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= this->balance && amount > 0)
	{
		this->balance -= amount;

		cout << endl << "Successful withdrawal of: " << amount << endl
			<< "New balance: " << this->balance << endl;
	}
	else if (amount > this->balance)
	{
		cout << endl << "Aborted withdrawal due to requested amount being greater than balance."
			<< endl << "Your balance: " << this->balance << endl;
	}
	else
	{
		cout << endl << "Aborted withdrawal due to requested amount being zero or less."
			<< endl << "Your balance: " << this->balance << endl;
	}
}

string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}

void BankAccount::display() const //Should not be available in a real life scenario
{
	cout << endl << "Owner: " << owner << endl
		<< "->Balance: " << balance << endl;
}