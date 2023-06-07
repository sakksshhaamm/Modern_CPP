#include<iostream>

#include "Car.h"
#include "Vehicle.h"
#include "Type.h"




std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " carBrand: " << rhs.carBrand;
    return os;
}

