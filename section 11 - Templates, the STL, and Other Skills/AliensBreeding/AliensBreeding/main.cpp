#include <iostream>
#include "Alien.h"
using namespace std;

int main()
{
    // Creating two Alien objects
    Alien alien1(50, 150, 'M');
    Alien alien2(60, 155, 'F');

    cout << "Alien 1: ";
    alien1.print();

    cout << "Alien 2: ";
    alien2.print();

    // Comparing aliens
    if (alien1 == alien2) cout << "Aliens have equal prestige." << endl;
    if (alien1 != alien2) cout << "Aliens have different prestige." << endl;
    if (alien1 > alien2) cout << "Alien 1 has greater prestige than Alien 2." << endl;
    if (alien1 < alien2) cout << "Alien 2 has greater prestige than Alien 1." << endl;

    // Breeding aliens to create a new one
    Alien babyAlien = alien1 + alien2;
    cout << "Baby Alien: ";
    babyAlien.print();

    // Testing the assignment operator
    Alien alien3 = alien1;
    cout << "Alien 3 (after assignment from Alien 1): ";
    alien3.print();

    // The gender of alien3 will be random due to metamorphosis. The weight and height will be the same as alien1.

    return 0;
}
