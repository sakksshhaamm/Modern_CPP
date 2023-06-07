#ifndef DATAHOLDER_H

#define DATAHOLDER_H

/*

  Create a class with given attributes.

  Delete the default constructor.Add a compplier implemented copy constructor

*/

#include <list>

template <typename T>

class DataHolder

{

private:
    std : list<T> dataValues;

public:
    DataHolder(const DataHolder < & obj) = default;{}
    DataHolder() = delete;
    DataHolder(std::list<T>& items);
    ~DataHolder() {}
};

/*

    ###LEVEL 1 topics
    l - values & r-values
    references & pointer

    ###LEVEL 2 topics

   l value reference & r value reference

   ###level 3 topics
   move constructor and std:: move function

   ###level 4 topic
   template argument deduction'

   ###level 5 topic

   forwarded references (also informanlly called universal reference) 
    with rvalue reference move cmantics is possible i.e move data/ownership from one enity to other


*/
template <typename T>

inline DataHolder<T>::DataHolder(std::list<T> &items) : dataValues(items){}
template <typename T>
inline DataHolder<T>::~DataHolder(){
    std::cout<<"Object Destroyed\n";
}


#endif // DATAHOLDER_H