#include "Alien.h"
#include <iostream>
#include <random>
using namespace std;

std::mt19937 Alien::generator(std::random_device{}());


Alien::Alien(int weight, int height, char gender)
{
    this->weight = weight;
    this->height = height;
    this->gender = gender;
}

int Alien::getPrestige() const
{
    int multiplier = 
        (tolower(gender) == 'm') ? 2 :
        (tolower(gender) == 'f') ? 3 : 1;

    return height * weight * multiplier;
}

void Alien::print() const {
    cout << "Gender: " << gender << ", Weight: " << weight << ", Height: " << height << ", Prestige: " << getPrestige() << endl;
}

bool Alien::operator==(const Alien& other) const {
    return getPrestige() == other.getPrestige();
}

bool Alien::operator!=(const Alien& other) const {
    return getPrestige() != other.getPrestige();
}

bool Alien::operator>(const Alien& other) const {
    return getPrestige() > other.getPrestige();
}

bool Alien::operator>=(const Alien& other) const {
    return getPrestige() >= other.getPrestige();
}

bool Alien::operator<(const Alien& other) const {
    return getPrestige() < other.getPrestige();
}

bool Alien::operator<=(const Alien& other) const {
    return getPrestige() <= other.getPrestige();
}


//Breeds an alien from the parents (this - other)
Alien Alien::operator+(const Alien& other) const
{
    char babyGender = generateGender();

    int babyWeight = (weight + other.weight) / 2;
    int babyHeight = (height + other.height) / 2;

    return Alien(babyWeight, babyHeight, babyGender);
}

Alien& Alien::operator=(const Alien& other) {
    if (this != &other) {
        weight = other.weight;
        height = other.height;
        gender = generateGender(); // The alien undergoes metamorphosis for gender
    }
    return *this;
}

char Alien::generateGender() const {
    return (uniform_int_distribution<>(1, 10)(generator) > 3) ? 'M' : 'F';
}