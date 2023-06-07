#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"
#include<iostream>
class Bike : public Vehicle
{
private:
    std::string bikeModel;
public:
    Bike()=delete;
    Bike(std::string vehicleId,float vehiclePrice,std::string bikeModel);
    void calculateRtoTax() override;
    ~Bike();

    std::string getBikeModel() const { return bikeModel; }
    void setBikeModel(const std::string &bikeModel_) { bikeModel = bikeModel_; }

    
};

#endif // BIKE_H
