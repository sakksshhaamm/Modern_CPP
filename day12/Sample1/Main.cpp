#include <iostream>
#include"Bike.h"
#include"Vehicle.h"
#include "Car.h"
#include <array>
#include <variant>

using Type= std::variant<Car*,Bike*>;
/*
    a function that creates 2 bikes ,3 cars and stores them in a common data container
    the function should then call calculateRTO tax on each vehicle object stored

*/



void Task(){
    
    Type v1= new Bike("BK101",11000.0f,"Impulse");
    Type v2= new Bike("BK101",165000.0f,"Royal Enfield");
    Type v3= new Bike("BK101",834000.0f,"Dzire");
    Type v4= new Car("Car101",100000.0f,"OCTAVIA");
    Type v5= new Car("Car102",1500000.0f,"Taigun");

    std::array<Type,5> data {v1,v2,v3,v4,v5};

/*

for each entry in the data (which is a variant btw),do the followingb 

    a- Think of an action and specify it as a generic lamda( or overload function)
    b- visit the entry and perform the action (basically apply lambda or entry)

    *note: a and b steps can be written in the same line


*/


    for(auto& entry:data){
        std::visit([](auto arg){arg->calculateRtoTax();},entry);
    
}
for(auto& entry:data){
        std::visit([](auto arg){delete arg;},entry);

}
}
int main(){
    Task();
}
