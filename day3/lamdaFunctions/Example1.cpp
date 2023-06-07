#include<iostream>
#include<list>
// #normal function
int square(int number){
    return number* number;

}
// #LAMBDA FUNCTION
auto f = [] (int number) {return number * number;};


int cube(int number){

  return number* number* number;  
}

/*
operation should accept a list of values & a "logic" of some operations
I want to perform on each element of the list

the operation function should then loop and one by one apply the operation
on the values

*/
void operation(std::list<int>&& data, int (*function)(int) ){

    for (int value: data){
    function(value);// apply passed function on to the value in data list

}
}
int main(){

    operation(std::list<int>{1,2,3,4,5} , square);
    operation(std::list<int>{1,2,3,4,5} , cube);

// lambda
operation(std::list<int>{1,2,3,4,5} , f);
operation(std::list<int>{1,2,3,4,5} , [](int number) {return number * number* number;} );

    // int *ptr = &square;
    // int ans =(*ptr)(10);//call function by using a pointer
    // std::cout<<ans;
    return 0;
}

