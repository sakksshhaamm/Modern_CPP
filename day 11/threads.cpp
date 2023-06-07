#include<iostream>
#include<thread> //modern cpp

int arr[10];
void square(int number){

    for(int i=0;i<5;i++){
    std::this_thread::sleep_for(std::chrono::seconds(5));
    arr[i] = i*i;
    }
}


void cube(int number){
     for(int i=0;i<5;i++){
    std::this_thread::sleep_for(std::chrono::seconds(5));
  arr [i+5] = i * i* i;
    }}

int main(){
std::thread t1(square,10);
std::thread t2(cube,10);



//While we call join  from INSIDE ANY THREAD,the thread expected to join goes in- block state
//here main requested the job, main is expected to join which means main thread goes in block state

t1.join();  //resume after t1 finishes and join to its output
t2.join(); //resume after t2 finishes and join to its output
}






/*

for multiple threading 

*/