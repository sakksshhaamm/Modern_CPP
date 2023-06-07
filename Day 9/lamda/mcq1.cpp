#include<iostream>
#include<functional>
#include<vector>
#include<list>

using namespace std;

void operation(){
int n=0;
auto fn1 = [n]() mutable {return n*n + 10;};
fn1();
std::cout<<n;
}
int main(){
    operation();
}