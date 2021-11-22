//Zane Barhorst
//CIS 1202 502
//11/21/21

#include <iostream>
#include <string>
#include "Vehicle_C.h"
#include "Car_C.h"
#include "Truck_C.h"

using namespace std;

int main() {
	string man;
	int year;
	int numDoors;
	int tow;

	cout << "Vehicle Program\n";
	cout << "Vehicle: \n";
	cout << "Please enter the manufacturer: ";
	getline(cin, man);
	cout << "Please enter the year the vehicle was built: ";
	cin >> year;

	//Creating the vehicle class object
	Vehicle_C vehicle(man, year);
	vehicle.displayInfo();
	cout << "\n";
	
	cout << "Car: \n";
	cout << "Please enter the manufacturer: ";
	getline(cin, man);
	cout << "Please enter the year built: \n";
	cin >> year;
	cout << "Please enter the number of doors: \n";
	cin >> numDoors;

	//Creating the car class object
	Car_C car(man, year, numDoors);
	car.displayInfo();

	cout << "Truck: \n";
	cout << "Please enter the manufacturer: ";
	getline(cin, man);
	cout << "Please enter the year built: \n";
	cin >> year;
	cout << "Please enter the towing capacity: \n";
	cin >> numDoors;

	//Creating the car class object
	Truck_C car(man, year, numDoors);
	car.displayInfo();
}
