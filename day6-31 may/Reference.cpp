#include<iostream>
int main(){

    int n1 =100;
    int n2 =200;
    int *ptr =&n1;

    ptr= &n2; //reassigned ptr to n2

    std::cout<<"n1 is:" <<n1<<"\n";
    std::cout<<"n2 is:" <<n2<<"\n";

//////////////////////////////////////////////////////////////////////////
    int& data =n1; //an integer reference
    
    data =n2;

    std::cout<<"n1 is:" <<n1<<"\n";
    std::cout<<"n2 is:" <<n2<<"\n";
    // magic(data);

    // std::cout<<data<<'\n';
}