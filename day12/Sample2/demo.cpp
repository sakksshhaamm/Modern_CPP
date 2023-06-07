#include<iostream>
#include<variant>

int main(){

std::variant<int,std::string>data;
data =10;

try{
std::cout<<std::get<0>(data)<<"\n";
data="SAKSHAM";
std::cout<<std::get<1>(data)<<"\n";
std::cout<<std::get<0>(data)<<"\n";  //error!!!!!!!!!!
}catch (std::bad_variant_access& ex){
    std::cout<<ex.what()<<"\n";
}

}