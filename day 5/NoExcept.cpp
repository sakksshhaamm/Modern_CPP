#include<iostream>

int factorial_old_way(int number){
    if(number<0){
       
        return -1;
        }
        else if (number==0|| number ==1){
            return 1;

        }
        else{
            int total =1;
            for(int count=2;count<=number;count++){
                total*=count; //total =total *count

            }
            return total;

        }
    }

int factorial_ooop_way(int number){
    if(number<0){
        throw std::runtime_error("We can not calculate factorial of negative number");
       
        
        }
        else if (number==0|| number ==1){
            return 1;

        }
        else{
            int total =1;
            for(int count=2;count<=number;count++){
                total*=count; //total =total *count

            }
            return total;

        }
    }    