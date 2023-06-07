#ifndef VEHICLE_H
#define VEHICLE_H

#include "Type.h"

#include<iostream>

class Vehicle
{
private:
    std::string vehicleName;
    float vehiclePrice;
    enum class Vehicle_Type vehicleType;

public:
    Vehicle() = default;
    Vehicle(Vehicle &t) = delete;
    Vehicle(std::string name, float price, enum class Vehicle_Type vehicleType);

    virtual float calledRtoTax() = 0; 

    virtual ~Vehicle();

   std::string getVehicleName() const { return vehicleName; }
   void setVehicleName(const std::string &vehicleName_) { vehicleName = vehicleName_; }

   float getVehiclePrice() const { return vehiclePrice; }
   void setVehiclePrice(float vehiclePrice_) { vehiclePrice = vehiclePrice_; }

   enum class Vehicle_Type getvehicleType() const { return vehicleType; }
    void setvehicleType(const enum class Vehicle_Type &vehicleType_) { vehicleType = vehicleType_; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    

   
};
std::string displayEnum(enum class Vehicle_Type vehicleType);



//3blue1brown
//cppweeklywithjasonturner
//thecheron



#endif // VEHICLE_H
