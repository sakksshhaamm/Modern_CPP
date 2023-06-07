#include <iostream>
#include <list>
#include <functional> // support for functional programing




void operation(std::list<int> &data, std::function<void(int)> f2)
{
    /*
        for all elements of data, pass the element to the function f2 and call the function
    */
    for (auto &val : data)
    {
        f2(val);
    }
}

int main()
{
    // void(*ptr)(int)=&Square;// avoid using function pointer in modern cpp

    // example 1 lambda function being declared and assigned to a variable
    auto fsquare =[](int number){
        std::cout << "Square of" << number << "is" << number * number << "\n";
};
    std::list<int> data = {1, 2, 3, 4, 5};

    // we are passing lambda variable;
    operation(data, fsquare );

//declaring lambda inline (temporary value) and passing it immediately
    operation(data, [](int number){
    
std::cout << "100 times" << number << "is" << number * 100 << "\n";


});
}