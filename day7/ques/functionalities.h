
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include <string>
#include "employee.h"

std::vector<Employee> FindEmployeeAboveThreshold(const std::vector<Employee>& employees, float threshold);
const Employee* FindEmployeeWithGivenId(const std::vector<Employee>& employees, const std::string& id);
double FindCombinedSalary(const std::vector<Employee>& employees);

#endif // FUNCTIONALITIES_H
