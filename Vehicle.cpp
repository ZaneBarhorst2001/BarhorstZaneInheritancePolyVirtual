#include <iostream>
#include "Vehicle_C.h"

using namespace std;

Vehicle_C::Vehicle_C() {
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string man, int year) {
	manufacturer = man;
	yearBuilt = year;
}

string Vehicle_C::getManufacturer() {
	return manufacturer;
}

int Vehicle_C::getYearBuilt() {
	return yearBuilt;
}

void Vehicle_C::setManufacturer(string man) {
	manufacturer = man;
}

void Vehicle_C::setYearBuilt(int year) {
	yearBuilt = year;
}

void Vehicle_C::displayInfo() const {
	cout << "Vehicle Information: \n";
	cout << "Manufacturer: " << getManufacturer() << "\n";
	cout << "Year Built: " << getYearBuilt() << "\n";
}