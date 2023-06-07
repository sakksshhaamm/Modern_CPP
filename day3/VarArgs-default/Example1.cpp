#include<iostream>
#include<cstdarg>
//varags : variable number of argymentgs

void sum(int count...){
// create a list where we cam store information about varargs

va_list args; // a list like collection of values

// fetch the starting value of varargs
va_start(args,count); //store the first temporary value passed as vararg(data variable) into args
// keep fetching the next value from varargs till all values are exhausted

int total=0;
int fetched_value;
for(int i =0;i<count;i++){

    fetched_value= va_arg(args,int);
    std::cout<< fetched_value<<"\n";
    total= total+fetched_value;
}



// close the varargs list


}

int main(){
    sum(1, 1);
    sum(4 , 1,2,3,4);
    sum(13,   10,20,30);

}