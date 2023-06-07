#include<functional>
#include<iostream>
#include<list>
void magic(int n1){

    // std::cout <<"Address of n1 (magic):"<<&n1<<"\n";
    
}

/*
    TO CREATE A STD::REF WRAPPER FOR A "DATA" Of TYPE T
    
    1)TAKE THE ADDRESS OF THE ORIGINAL VALUE CALLED "data"
    2)STORE THIS ADDRESS INTO A NEW OBJECT CALLED WRAPPER OBJECTS

    NOTE*- THIS WRAPPER OBJECT IS A COPYABLE & ASSIGNMENMT OBJECT OF TYPE reference_wrapper<T>
*/







int main()
{
    int n1=10;
    std::cout<<"Address of n1 (main):"<<&n1<<"\n";
    auto data = std::ref<int>(n1);//std::ref createsn a reference wrapper


    std::list<std::reference_wrapper<int>> values = {data}; //reference can nown be stored in a list
    std::reference_wrapper<int>arr[1]={data};// array of reference can now be crteated 



    magic(data);

    int n2=200;
    data=n2; //safe reassignment

    auto* ptr =&data;// safe pointer access to wrapperc
}