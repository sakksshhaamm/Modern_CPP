#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "Vehicle.h"
class Car : public Vehicle
{
private:
    std::string carModel;
public:
Car(std::string VehicleId,float vehiclePrice,std::string carModel);
    Car()=delete; 
 void calculateRtoTax() override;

    ~Car();


};

#endif // CAR_H
