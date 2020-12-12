//Jie Shi
//CIS 1202 502
//12/10/2020

#pragma once
#include "vehicle.h"

class Truck : public Vehicle{
private:
    int capacity;   
public:
    Truck(int, string, int);   

    int getCapacity();
    void setCapacity(int);
    void displayInfo();           
};
