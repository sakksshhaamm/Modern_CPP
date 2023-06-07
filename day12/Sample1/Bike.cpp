#include "Bike.h"
Bike::Bike(std::string VehicleId, float vehiclePrice, std::string bikeModel) : Vehicle(VehicleId, vehiclePrice)
,bikeModel(bikeModel){}

Bike::~Bike()
{
    std::cout<<"Bike\n";

}

void Bike::calculateRtoTax()
{
    std::cout<<"Bike Tax is "<<.1f* this->getVehiclePrice()<<"\n";
}
