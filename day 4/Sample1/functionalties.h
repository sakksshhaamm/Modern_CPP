#ifndef FUNCTIONALTIES_H
#define FUNCTIONALTIES_H

#include <list>

#include "Vehicle.h"

float averageVehiclePrice(std::list<Vehicle>*& data);

void findGivenVehicleType(std::list<Vehicle*>& data, enum class Vehicle_Type vehicleType);

#endif // FUNCTIONALTIES_H
