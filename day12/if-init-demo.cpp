#include<vector>
#include<algorithm>
#include<iostream>


/*
    Many times ,we create variables which are only used in the if-else block
    structure and are not required anywhere after this if else block in the current- scope

*/

std::vector<int> v1{1,2,3,4,5};


int findElement(){

    auto f1 = [](int number){return number%3==0;};

    char input='A';
    while(input !='0')
    if (auto itr = std::find_if(v1.begin(),v1.end(),f1);(itr ==v1.end())){
        throw std::runtime_error("Element for this condition not found");

    }
    
else{
    std::cout<<"search Complete\n";
    std::cout<<"sending result to database";


    return *itr;
}

std::cout<<"Press 0 to stop or any another key to continue";
std::cin>>input;

}

/*
    the first iterator i in the range

    [__first,__last such that __pred(*i) is true,or
    __last if no such iterator exists.]


*/