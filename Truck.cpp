#include <iostream>

#include "Vehicle_C.h"
#include "Truck_C.h"

using namespace std;

Truck_C::Truck_C() :Vehicle_C(){
	towCapacity = 0;
}

Truck_C::Truck_C(string man, int year, int tow) : Vehicle_C(man, year) {
	towCapacity = tow;
}

int Truck_C::getTowCapacity() {
	return towCapacity;
}

void Truck_C::setTowCapacity(int tow) {
	towCapacity = tow;
}

void Truck_C::displayInfo() const {
	Vehicle_C::displayInfo();
	cout << "Towing Capacity: " << getTowCapacity() << "\n";
}