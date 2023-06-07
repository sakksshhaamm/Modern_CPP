#include "Vehicle.h"
#include<iostream>

Vehicle::~Vehicle()
{
    std::cout << "Vehicle Obj Destroyed\n";
}

std::string displayEnum(enum class Vehicle_Type vehicleType)
{
    if(vehicleType == Vehicle_Type::SUV)
    {
        return "SUV";
    }

    else if (vehicleType == Vehicle_Type::SEDAN)
    {
        return "SEDAN";
    }

    else if (vehicleType == Vehicle_Type::ELECTRIC_SUV)
    {
        return "ELECTRIC_SUV";
    }

    else if (vehicleType == Vehicle_Type::ELECTRIC_TWO_WHEELER)
    {
        return "ELECTRIC_TWO_WHEELER";
    }

    else
    {
        return "ICE_TWO_WHEELER";
    }
    
    
    
    
}



std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "vehicleName: " << rhs.vehicleName
       << " vehiclePrice: " << rhs.vehiclePrice
       << " vehicleType: " << displayEnum(rhs.vehicleType);
    return os;
}
