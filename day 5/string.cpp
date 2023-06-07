#include<iostream>
int main(){

std::string paragraph="This is line 1\nThis is demo for line 2\nThanks for writing\nGoodbye";

std::string data_raw = R".("This is line 1
This is demo for line 2
This is line (3)"
Thanks"\n""\t" for writing
Goodbye).";

std::cout<< paragraph<<std::endl;
std::cout<<paragraph<<data_raw;
return 0;
}