#pragma once
#ifndef CAR_C_H
#define CAR_C_H

#include <iostream>
#include "Vehicle_C.h"

using namespace std;

class Car_C: public Vehicle_C {
private:
	int numOfDoors;

public:
	Car_C();

	Car_C(string man, int year, int numDoors);
	int getNumDoors();
	void setNumDoors(int numDoors);
	virtual void displayInfo() const;
};
#endif
