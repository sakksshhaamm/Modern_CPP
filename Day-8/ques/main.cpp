#include <iostream>
#include <list>
#include <functional>
#include "vehicledata.h"
#include "functionalities.h"

int main()
{
    // Create some VehicleData objects
    VehicleData vehicle1("1234", "Toyota Camry", VehicleType::SEDAN, 60, 8.5);
    VehicleData vehicle2("5678", "Honda CR-V", VehicleType::SUV, 70, 10.2);
    VehicleData vehicle3("9012", "Ford Focus", VehicleType::HATCHBACK, 50, 9.8);

    // Create a list of VehicleData objects
    std::list<VehicleData> vehicles;
    vehicles.push_back(vehicle1);
    vehicles.push_back(vehicle2);
    vehicles.push_back(vehicle3);

    // Create a list of function objects
    std::list<std::function<double(const std::list<VehicleData> &)>> functions;
    functions.push_back(calculateAverageFuelCapacity);
    functions.push_back(std::bind(findMileageById, std::placeholders::_1, "5678"));

    // Perform operations using VehicleData objects and function objects
    for (const auto &func : functions)
    {
        double result = func(vehicles);
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
