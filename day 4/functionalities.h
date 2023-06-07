#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <iostream>
#include "Vehicle.h"
#include <list>

float averageVehiclePrice(std::list<Vehicle*>& l);

void findGivenVehicleType(std::list<Vehicle*>& l,enum class vehicleType type);

int countGivenTypes(std::list<Vehicle>&,std::list<vehicleType*>&);

#endif // FUNCTIONALITIES_H