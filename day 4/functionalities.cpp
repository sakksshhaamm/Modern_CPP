#include <iostream>
#include <list>
#include "Vehicle.h"
#include "Car.h"
#include "vehicleType.h"
#include "functionalities.h"

float averageVehiclePrice(std::list<Vehicle*>& l){
    float sum=0.0f;
    int cnt=0;
    for(auto* a:l){
        sum+=a->getVehiclePrice();
        cnt++;
    }
    return sum/cnt;
}

void findGivenVehicleType(std::list<Vehicle*>& l,enum class vehicleType type){
    for(auto* v:l){
        if(v->getType()==type){
            std::cout<<*v<<" "<<std::endl;
        }
    }
}

int countGivenTypes(std::list<Vehicle*>& l,std::list<enum class vehicleType>& t){
    int sum=0;
    for(auto* v:l){
        for(auto a:t){
            if(a==v->getType()){
                sum++;
            }
        }
    }
    return sum;
}