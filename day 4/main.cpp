#include<iostream>
#include <list>
#include "Vehicle.h"
#include "Car.h"
#include "vehicleType.h"
#include "functionalities.h"

int main(){
    Vehicle* c1=new Car("AUDI",vehicleType::SUV,23.5f,"R8");
    Vehicle* c2=new Car("LAMBORGHINI",vehicleType::SEDAN,14.5f,"URUS");
    Vehicle* c3=new Car("BUGATTI",vehicleType::ELECTRIC_TWO_WHEELER,35.5f,"CHIRON");
    std::list<Vehicle*> l={c1,c2,c3};
    // std::cout<<averageVehiclePrice(l)<<std::endl;
    // findGivenVehicleType(l,vehicleType::SEDAN);
    std::list<enum class vehicleType> t={vehicleType::SEDAN,vehicleType::SUV,vehicleType::ELECTRIC_TWO_WHEELER,vehicleType::SEDAN};
    
    for(auto v:l){
        delete v;
    }
}