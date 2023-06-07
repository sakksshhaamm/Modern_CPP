/*
    YOU CAN USE AN INTEGER,FLOAT,CHARACTER OR STRING LITERAL
    WITH AN ADDED SUFFIX TO DEFINE YOUR OWN LITERAL

*/

//OBJECTIVE 10_m

#include<iostream>
int operator ""_M(unsigned long long number){
return number *60;

}
int main()
{
    std::cout<<10_M;
}