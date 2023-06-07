#ifndef CAR_H
#define CAR_H

#include <string>
#include "CAR_TYPE.h"
class Car
{
public:
    Car() = delete;
    Car(const std::string &carBrand, const std::string &carModel);
    Car(const std::string &carBrand, const std::string &carModel, CAR_TYPE carType);
    Car(const std::string &carBrand, const std::string &carModel, CAR_TYPE carType, float carPrice);

    float calculateInsuranceAmount() const;

    virtual ~Car() {}

    const std::string &getCarBrand() const { return carBrand; }
    void setCarBrand(const std::string &carBrand) { this->carBrand = carBrand; }

    const std::string &getCarModel() const { return carModel; }
    void setCarModel(const std::string &carModel) { this->carModel = carModel; }

    CAR_TYPE getCarType() const { return carType; }
    void setCarType(CAR_TYPE carType) { this->carType = carType; }

    float getCarPrice() const { return carPrice; }
    void setCarPrice(float carPrice) { this->carPrice = carPrice; }

private:
    std::string carBrand;
    std::string carModel;
    CAR_TYPE carType;
    float carPrice;
};

#endif // CAR_H