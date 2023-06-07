#include <iostream>
#include "Car.h"
#include "CAR_TYPE.h"
#include "functionalities.h"
#include <list>
int main() {
std::list<Car*> carList;

carList.push_back(new Car("Toyota", "Camry",CAR_TYPE:: SUV, 30000));
carList.push_back(new Car("Honda", "Accord", CAR_TYPE::SEDAN, 25000));
carList.push_back(new Car("Nissan", "Altima", CAR_TYPE::HATCHBACK, 20000));
carList.push_back(new Car("Hyundai", "Sonata",CAR_TYPE:: SEDAN, 22000));
carList.push_back(new Car("Kia", "Optima",CAR_TYPE:: HATCHBACK, 19000));

std::cout << "The highest insurance amount is: " << FindHighestInsuranceAmount(carList) << std::endl;

int count = FindCountofGivenType(carList, CAR_TYPE::HATCHBACK, 20000);
std::cout << "The number of hatchbacks with price less than or equal to 20000 is: " << count << std::endl;

return 0;
}