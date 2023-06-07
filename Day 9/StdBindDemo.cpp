#include <iostream>
#include<functional>



/*
    product

*/
using namespace std::placeholders;
int product(int x, int y)
{
    return x * y;
}
    // int product(int x, int y)
    // {
    //     return x * 100;
    // }

int formula(int x,int y,int z,int aa)    {
    return ((x-y)*z/aa);
}
 
auto fn1 = [](int number){return number * number;};
 
auto fn2 = [](int number,int factor){return number * factor;};

        int mmain()
    {
        auto f1 =std::bind(&product,_1,100);

        f1(20);

// reuse formula function in a way where z and aa parameter are already fixed

auto f2 =std::bind(&formula, -1,_2,10,5);

f2(11,10);
//while passing a lamda to std::bind, do not use &

auto fn3 = std::bind(fn2, _1,5);// factor set to 5
fn3(100); //number,factor =5

// vector won't take fn2 or modified rebind fn3 either
// std::vector < std::function<int(int)>> v1 = {fn1,fn3};

std::vector< std::function<int(int) > >v1 = {fn1,fn3};
    }


/*
YOU CAN USE STD::BIND TO DO THE FOLLOWING
    a-REUSE LOGIC INSIDE A FUNCTION BY FIXING THE VALUE OF SOME OF THE PARAMETERS OF THE ORIGINAL FUNCTION (PRODUCT &FORMULA)

    B- YOU CAN BIND THE AN EXISTING FUNCTION'S PARAMETER TO A VALUE SO THAT IT CAN BE STORED IN A CONTAINER
    WHO EXPECTED TYPE DOES NOT MATCH WITH A FUNCTION TO BE STORED!!(fn2 and fn3)

    C- YOU CAN REMAP THE ORDER OF ARGUMENT OF AN EXISTING FUNCTION


*/

void applyFormula(int x ,int y,int z){
    std::cout<<(x+y)-z;

    applyFormula(10,40,20);


}



/*

TO USE A MEMBER FUNCTION WITH BIND,YOU NEED TO PASS POINTER TO AN OBJECT AS THE SECOD PARAMETER THE FUNCTION POINTER IS MANDATORY
AND HAS TO BE SPECIFIED AS ClassName::functionName
*/