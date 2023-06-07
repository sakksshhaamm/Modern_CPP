// CPP SPECIFIC: USE A DATA CONTAINER

#include<list>
#include<iostream>

/*
    sum takes reference to a standard list of integers as a parameter.
    It then prints the arthmetic total of all values inside the vector

*/

void sum(std::list<int>&& data){

    int total =0;
    for(int value : data){
        total= total+value;
    }
    std::cout<<total<<"\n";
}
int main(){

sum( std::list<int>     {1,2,3,4,5});
sum( std::list<int> {-10,-20,-99});
sum( std::list<int> {-20});

sum( std::list<int> {10,20});
}

