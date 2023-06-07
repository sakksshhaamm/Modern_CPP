#include <iostream>
#include<algorithm>
#include <list>

int main()

{
    std::list<int> data = {1, 2, 3, 4, 5, 10, 20, 45, 11, 13};
    std::list<int> results;
    /*
        copy element from data into the results which are divided by 5

    */
    // for (const auto& elem: data){
    //     if(elem % 5==0){
    //         results.push_back(elem);
    //     }
    // }

    std::copy_if(

        data.begin(),
        data.end(),

        results.begin(),

        [](int number){return number % 5 == 0;});

    
}