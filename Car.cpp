#include <iostream>
#include "Vehicle_C.h"
#include "Car_C.h"

using namespace std;

Car_C::Car_C() :Vehicle_C() {
	numOfDoors = 0;
}

Car_C::Car_C(string man, int year, int numDoors) : Vehicle_C(man, year) {
	numOfDoors = numDoors;
}

int Car_C::getNumDoors() {
	return numOfDoors;
}

void Car_C::setNumDoors(int numDoors) {
	numOfDoors = numDoors;
}

void Car_C::displayInfo() const {
	Vehicle_C::displayInfo();
	cout << "Doors: " << getNumDoors() << "\n";
}