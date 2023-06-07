#include<iostream>
#include<functional>
#include<vector>
#include<list>


using LAMBDA=std::function<int(int)>;
void operation()
{
    std::vector<LAMBDA> fns;
LAMBDA fn=[](int number){int ans = number*10;return ans;};

fns.push_back(fn);
std::vector<int>v1 {1,2,3,4,5};	
	std::cout<<fn(v1[4]);
} 
int main (){
operation();
}
