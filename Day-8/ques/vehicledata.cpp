#include "vehicledata.h"
#include "vehicletype.h"
#include <iostream>

void displayVehicleType(VehicleType type)
{
    switch (type)
    {
    case VehicleType::SEDAN:
        std::cout << "SEDAN";
        break;
    case VehicleType::SUV:
        std::cout << "SUV";
        break;
    case VehicleType::HATCHBACK:
        std::cout << "HATCHBACK";
        break;
    default:
        std::cout << "Unknown";
    }
}

VehicleData::VehicleData()
{
    vehicleID = "";
    vehicleModel = "";
    vehicleType = VehicleType::SEDAN;
    fuelTankCapacity = 0;
    mileage = 0.0;
}

VehicleData::VehicleData(const std::string &vehicleID, const std::string &vehicleModel, VehicleType type, int fuelTankCapacity, double mileage)
{
    this->vehicleID = vehicleID;
    this->vehicleModel = vehicleModel;
    this->vehicleType = type;
    this->fuelTankCapacity = fuelTankCapacity;
    this->mileage = mileage;
}

void VehicleData::setVehicleID(const std::string &vehicleID)
{
    this->vehicleID = vehicleID;
}

void VehicleData::setVehicleModel(const std::string &vehicleModel)
{
    this->vehicleModel = vehicleModel;
}

void VehicleData::setVehicleType(VehicleType type)
{
    this->vehicleType = type;
}

void VehicleData::setFuelTankCapacity(int fuelTankCapacity)
{
    this->fuelTankCapacity = fuelTankCapacity;
}

void VehicleData::setMileage(double mileage)
{
    this->mileage = mileage;
}

std::string VehicleData::getVehicleID() const
{
    return vehicleID;
}

std::string VehicleData::getVehicleModel() const
{
    return vehicleModel;
}

VehicleType VehicleData::getVehicleType() const
{
    return vehicleType;
}

int VehicleData::getFuelTankCapacity() const
{
    return fuelTankCapacity;
}

double VehicleData::getMileage() const
{
    return mileage;
}

void VehicleData::display() const
{
    std::cout << "Vehicle ID: " << vehicleID << std::endl;
    std::cout << "Vehicle Model: " << vehicleModel << std::endl;
    std::cout << "Vehicle Type: ";
    displayVehicleType(vehicleType); // Call the displayVehicleType function from vehicletype.cpp
    std::cout << std::endl;
    std::cout << "Fuel Tank Capacity: " << fuelTankCapacity << std::endl;
    std::cout << "Mileage: " << mileage << std::endl;
}

int VehicleData::operator+(const VehicleData &other) const
{
    return fuelTankCapacity + other.fuelTankCapacity;
}
