#include<iostream>
#include<thread>
#include<mutex>


std::mutex lk;

int balance =1000; // initial account balance



void deposit (){

    for (int i = 0;i<100;i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
std::lock_guard<std::mutex>lg(lk);  //for automatic unlock  //scope based  lockl
        lk.lock();// when lock is applied by a thread,all other threads 
        //are probhited from accessing the resource inside the lock
        balance = balance +10;

        lk.unlock();
    }
}

void withdraw(){

    for (int i = 0;i<100;i++)
    {
        
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        lk.lock();
        balance = balance - 10;
         lk.unlock();
    }
}

int main(){
    std::thread t1(&deposit);
    std::thread t2(&withdraw);

    t1.join();
    t2.join();

    std::cout<<balance<<"\n";
}