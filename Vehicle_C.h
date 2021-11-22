#pragma once
#ifndef VEHICLE_C_H
#define VEHICLE_C_H

#include <iostream>
#include <string>

using namespace std;

//The Vehicle Class
class Vehicle_C {
private:
	string manufacturer;

protected:
	int yearBuilt;

public:
	//Default Constructor
	Vehicle_C();
	
	Vehicle_C(string man, int year);
	string getManufacturer();
	int getYearBuilt();

	void setManufacturer(string man);
	void setYearBuilt(int year);
	virtual void displayInfo() const;
};
#endif
