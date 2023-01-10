#include <iostream>
#include "Pizza.h"
using namespace std;

int main()
{
	Pizza pepperoni("Papa pepe", 10, 80);

	pepperoni.addTopping("Pepperoni");
	pepperoni.addTopping("Cheddar");
	pepperoni.addTopping("Cilantro");

	pepperoni.printToppings();
	cout << "The cost: " << pepperoni.getCost() << endl;

	Pizza ham("Jamon especiale", 15, 10);
	ham.addTopping("Olives");
	ham.addTopping("Chili");

	ham.printPizza();

	return 0;
}