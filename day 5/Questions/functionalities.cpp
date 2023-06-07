#include <list>
#include <iostream>

#include "Car.h"
#include "CAR_TYPE.h"

float FindHighestInsuranceAmount(const std::list<Car *> &car_list)
{
    if(car_list.empty()){
        throw std::runtime_error("Car is not in list");
    }
    float highest_insurance_amount = 0.0f;

    for (const auto &car : car_list)
    {
        float insurance_amount = car->calculateInsuranceAmount();
        if (insurance_amount > highest_insurance_amount)
        {
            highest_insurance_amount = insurance_amount;
        }
    }

    return highest_insurance_amount;
}

int FindCountofGivenType(const std::list<Car *> &car_list, CAR_TYPE car_type, float limit)
{
     if(car_list.empty()){
        throw std::runtime_error("Car is not in list");
    }
    int count = 0;

    for (const auto &car : car_list)
    {
        if (car->getCarType() == car_type && car->getCarPrice() <= limit)
        {
            ++count;
        }
    }

    return count;
}