#ifndef VEHICLEDATA_H
#define VEHICLEDATA_H

#include <string>
#include "vehicletype.h"

class VehicleData
{
public:
    VehicleData();
    VehicleData(const std::string &vehicleID, const std::string &vehicleModel, VehicleType type, int fuelTankCapacity, double mileage);

    void setVehicleID(const std::string &vehicleID);
    void setVehicleModel(const std::string &vehicleModel);
    void setVehicleType(VehicleType type);
    void setFuelTankCapacity(int fuelTankCapacity);
    void setMileage(double mileage);

    std::string getVehicleID() const;
    std::string getVehicleModel() const;
    VehicleType getVehicleType() const;
    int getFuelTankCapacity() const;
    double getMileage() const;

    void display() const;
    int operator+(const VehicleData &other) const;

private:
    std::string vehicleID;
    std::string vehicleModel;
    VehicleType vehicleType;
    int fuelTankCapacity;
    double mileage;
};

#endif // VEHICLEDATA_H
