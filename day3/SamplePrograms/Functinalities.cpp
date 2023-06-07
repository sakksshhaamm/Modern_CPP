#include "DataHolder.h"

#include <iostream>

template <typename T>

T displayFirst(std::list<T> &values){
{

if (values.empty())
    {

      throw std::runtime_error("Sorry.List passed is empty!");

 
    }

return values.front();
}

template <typename T>

T findElementAtGivenPosition(std::list<T> &values, int position)
{

//does not work with a list

//return values[position]; //directly accessing poistion from values using operator[]

if(position < 0 || position>=values.size){
    throw std :: runtime_error("Position is Invalid")
}

auto itr = values.begin()

return *(itr + position);
}

template<typename T>

bool searchElement(std::list<T>& values,T item){
    if(values.empty())[
        throw std::runtime_error("Sorry,List passed is empty!");

    ]
    for(T element:values)
    if(element==item){
        return true;
    }

}

return false;
}