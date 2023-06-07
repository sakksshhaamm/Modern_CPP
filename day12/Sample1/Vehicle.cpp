#include "Vehicle.h"

Vehicle::Vehicle(std::string vehicleId, float vehiclePrice):vehicleId{vehicleId},vehiclePrice{vehiclePrice}{}

Vehicle::~Vehicle()
        {
            std::cout<<"Vehicle Destroyed\n";
        }



std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "vehicleId: " << rhs.vehicleId
       << " vehiclePrice: " << rhs.vehiclePrice;
    return os;
}
