#include "Employee.h"
#include <unordered_map>
#include <list>
/*
    data is standard unordered map of
    string keys and standard list of integer type values
*/
std::unordered_map<std::string,std::list<int>> data;
int main(){

    auto emp2 = new Employee(101,"Saksham");
  Employee*emp3 = new Employee(*emp2);

}

