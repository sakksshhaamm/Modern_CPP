#ifndef CAR_H
#define CAR_H

#include "Type.h"
#include "Vehicle.h"

#include<iostream>

class Car : public Vehicle
{
private:
    std::string carBrand;
public:
    Car(std::string name,
        enum class Vehicle_Type vehicleType,
        float price, std::string brand);
    float calledRtoTax()
    {
    float tax=0.0f;
    
        if (this->getvehicleType() == Vehicle_Type::ELECTRIC_SUV)
        {
            return tax;
            
        }
        

        if (this->getvehicleType() == Vehicle_Type::SEDAN || Vehicle::getvehicleType() == Vehicle_Type::SUV)
        {
            return tax = 0.1f * getVehiclePrice();
        }
        
        
    }

    ~Car();

    std::string getCarBrand() const { return carBrand; }
    void setCarBrand(const std::string &carBrand_) { carBrand = carBrand_; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    

};



#endif // CAR_H
