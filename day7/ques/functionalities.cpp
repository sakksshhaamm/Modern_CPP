#include "functionalities.h"
#include <algorithm>

std::vector<Employee> FindEmployeeAboveThreshold(const std::vector<Employee>& employees, float threshold) {
   std::vector<Employee> aboveThresholdEmployees;
   for (const auto& employee : employees) {
       if (employee.getEmployeeSalary() > threshold) {
           aboveThresholdEmployees.push_back(employee);
       }
   }
   return aboveThresholdEmployees;
}

const Employee* FindEmployeeWithGivenId(const std::vector<Employee>& employees, const std::string& id) {
   for (const auto& employee : employees) {
       if (employee.getEmployeeId() == id) {
           return &employee;
       }
   }
   return nullptr;
}

double FindCombinedSalary(const std::vector<Employee>& employees) {
   double totalSalary = 0.0;
   for (const auto& employee : employees) {
       totalSalary += employee.getEmployeeSalary();
   }
   return totalSalary;
}