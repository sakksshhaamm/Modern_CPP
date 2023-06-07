#include<iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Type.h"
#include "functionalties.h"

int main()
{
    Vehicle *v1 = new Car("Audi", Vehicle_Type::SEDAN, 100023.4f,"Audi");
    Vehicle *v2 = new Car("Benz",Vehicle_Type::SEDAN,192929.4f,"Merc");
    Vehicle *v3 = new Car("Vitara",Vehicle_Type::SUV,178783,"Maruti");

    std::cout<<averageVehiclePrice()<<std::endl;
}