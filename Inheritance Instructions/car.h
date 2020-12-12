//Jie Shi
//CIS 1202 502
//12/10/2020

#pragma once
#include "vehicle.h"          

class Car : public Vehicle{
private:
    int doors;           
public:
    Car(int, string, int);             

    void setDoors(int);
    int getDoors();
    void displayInfo();       
};
