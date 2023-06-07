#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<list>
#include "Car.h"
#include "CAR_TYPE.h"

float FindHighestInsuranceAmount(const std::list<Car *> &car_list);
int FindCountofGivenType(const std::list<Car *> &car_list, CAR_TYPE car_type, float limit);

#endif // FUNCTIONALITIES_H
