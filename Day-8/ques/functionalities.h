#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <iostream>
#include <functional>
#include <list>
#include "vehicledata.h"

// Calculate AverageFuelCapacity from all VehicleData objects passed in a container and return the answer
auto calculateAverageFuelCapacity = [](const std::list<VehicleData> &vehicles)
{
    double sumFuelCapacity = 0.0;
    int count = 0;

    for (const auto &vehicle : vehicles)
    {
        sumFuelCapacity += vehicle.getFuelTankCapacity();
        count++;
    }

    if (count > 0)
    {
        return sumFuelCapacity / count;
    }

    return 0.0;
};

// Find mileage of vehicle with a given vehicle ID and return the answer
auto findMileageById = [](const std::list<VehicleData> &vehicles, const std::string &vehicleID)
{
    for (const auto &vehicle : vehicles)
    {
        if (vehicle.getVehicleID() == vehicleID)
        {
            return vehicle.getMileage();
        }
    }

    return 0.0;
};

// Perform operations using VehicleData objects and function objects
void operation(const std::list<VehicleData> &vehicles, const std::list<std::function<double(const std::list<VehicleData> &)>> &functions)
{
    for (const auto &func : functions)
    {
        double result = func(vehicles);
        std::cout << "Result: " << result << std::endl;
    }
}

#endif // FUNCTIONALITIES_H
