#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
class Vehicle
{
private:
    std::string vehicleId;
    float vehiclePrice;
public:
    Vehicle(std::string vehicleId,float vehiclePrice);
    Vehicle()=delete;
    Vehicle(const Vehicle& obj)=default;

   virtual void calculateRtoTax()=0;
    ~Vehicle();

    std::string getVehicleId() const { return vehicleId; }
    void setVehicleId(const std::string &vehicleId_) { vehicleId = vehicleId_; }

    float getVehiclePrice() const { return vehiclePrice; }
    void setVehiclePrice(float vehiclePrice_) { vehiclePrice = vehiclePrice_; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    
};

#endif // VEHICLE_H
