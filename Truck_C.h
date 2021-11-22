#pragma once
#ifndef TRUCK_C_H
#define TRUCK_C_H

#include <iostream>
#include "Vehicle_C.h"

using namespace std;

class Truck_C :public Vehicle_C {
private:
	int towCapacity;

public:
	Truck_C();
	Truck_C(string man, int year, int tow);

	int getTowCapacity();
	void setTowCapacity(int tow);
	virtual void displayInfo() const;
};
#endif