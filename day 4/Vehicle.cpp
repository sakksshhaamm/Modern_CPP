#include "Vehicle.h"

Vehicle::Vehicle(std::string name, vehicleType t, float price) : vehicleName(name),type(t),vehiclePrice(price)
{
}

Vehicle::~Vehicle(){
    std::cout<<getVehicleName()<<" Destroyed"<<std::endl;
}

std::string displayType(enum class vehicleType t){
    if(t==vehicleType::ELECTRIC_SUV){
        return "ELECTRIC_SUV";
    }
    else if(t==vehicleType::ELECTRIC_TWO_WHEELER){
        return "ELECTRIC_TWO_WHEELER";
    }
    else if(t==vehicleType::ICE_TWO_WHEELER){
        return "ICE_TWO_WHEELER";
    }
    else if(t==vehicleType::SEDAN){
        return "SEDAN";
    }
    return "SUV";
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "vehicleName: " << rhs.vehicleName
       << " type: " << displayType(rhs.type)
       << " vehiclePrice: " << rhs.vehiclePrice;
    return os;
}