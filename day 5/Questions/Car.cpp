#include "Car.h"
#include "CAR_TYPE.h"


Car::Car(const std::string &carBrand, const std::string &carModel) : carBrand(carBrand), carModel(carModel) {}

Car::Car(const std::string &carBrand, const std::string &carModel, CAR_TYPE carType) : carBrand(carBrand), carModel(carModel), carType(carType) {}

Car::Car(const std::string &carBrand, const std::string &carModel, CAR_TYPE carType, float carPrice) : carBrand(carBrand), carModel(carModel), carType(carType), carPrice(carPrice) {}

float Car::calculateInsuranceAmount() const
{
    switch (carType){

    case CAR_TYPE::SUV:
      
    case CAR_TYPE::SEDAN:
        return carPrice * 0.1f;

    case CAR_TYPE::HATCHBACK:
        return carPrice * 0.05f;
    default:
        return 0.0f;
    }
}