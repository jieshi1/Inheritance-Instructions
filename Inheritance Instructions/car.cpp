//Jie Shi
//CIS 1202 502
//12/10/2020

#include "car.h"
#include <iostream>
using namespace std;

Car::Car(int newDoors, string newManfact, int newYearBuilt) : Vehicle(newManfact, newYearBuilt){
	doors = newDoors;
}

int Car::getDoors(){
	return doors;
}

void Car::setDoors(int num){
	doors = num;
}

void Car::displayInfo(){
	Vehicle::displayInfo();         
	int numDoors = getDoors();       
	cout << "\nDoors: " << numDoors;      
}
