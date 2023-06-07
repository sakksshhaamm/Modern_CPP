#include "Vehicle.h"
#include "Car.h"
#include "Type.h"

#include<iostream>
#include<list>

#include "Vehicle.h"


float averageVehiclePrice(std::list<Vehicle*>& data)
{
    float total = 0.0f;

    for (auto* v : data)
    {
        total = total + v->getVehiclePrice();
    }
    return total / data.size();

}

void findGivenVehicleType(std::list<Vehicle*>& data, enum class Vehicle_Type vehicleType)
{
    float total = 0.0f;
    for (auto* v : data)
    {
        if(v->getvehicleType() == vehicleType)
        {
            std::cout<<v<<"\n";
        }
    }

    
}

int countOfVehicleTypes(std::list<Vehicle*>& data, std::list<enum class Vehicle_Type>& types)
{
    int total = 0;
    for(auto& type : types)
    {
        for(auto* v1 : data)
        {
            if(v1->getvehicleType() == type)
            {
                total ++;
            }
        }
    }

    return 0;
}