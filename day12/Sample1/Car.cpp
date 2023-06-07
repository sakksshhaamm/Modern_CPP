
#include "Car.h"
Car::Car(std::string VehicleId, float vehiclePrice, std::string carModel) : Vehicle(VehicleId, vehiclePrice)
,carModel(carModel){}

Car::~Car()
{
    std::cout<<"Car\n";

}

void Car::calculateRtoTax()
{
    std::cout<<"Car Tax is "<<.1f* this->getVehiclePrice()<<"\n";
}
