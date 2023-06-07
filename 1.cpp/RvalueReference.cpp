#include<iostream>


//square takes one value reference to an integer

void square(int&& data){
    std::cout<<"Square of"<<data<<" is"<<data * data<<'\n';

}



int main(){
/*
    10 is a literal value. it is also called a temporary
    10 is also called an rvalue since it is does not have its own address

                                        [temporary 0x100H]
                            int& data      <------- 10            
*/
square(10);



}