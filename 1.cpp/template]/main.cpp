#include<iostream>
#include "Example.h"
#include "FindResult.h"


FinalResult<int,std::string>*f;
void Initializer(){
    f=new FinalResult<int,std::string>(5,"Maths",97.5);
}

int main(){
Initializer();
}