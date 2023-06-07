#include <iostream>
#include "employee.h"
#include "functionalities.h"

int main() {
   // Create some Employee objects
   Employee emp1("E001", 5000.0, Department::IT);
   Employee emp2("E002", 6000.0, Department::HR);
   Employee emp3("E003", 7000.0, Department::ADMIN);
   Employee emp4("E004", 8000.0, Department::SALES);

   // Add the Employee objects to a vector
   std::vector<Employee> employees = { emp1, emp2, emp3, emp4 };

   // Test FindEmployeeAboveThreshold function
   std::vector<Employee> aboveThreshold = FindEmployeeAboveThreshold(employees, 6000.00);
   std::cout << "Employees above threshold:\n";
   for (const auto& employee : aboveThreshold) {
       std::cout << "Employee ID: " << employee.getEmployeeId() << ", Salary: " << employee.getEmployeeSalary() << "\n";
   }

   // Test FindEmployeeWithGivenId function
   const Employee* emp = FindEmployeeWithGivenId(employees, "E003");
   if (emp) {
       std::cout << "Employee found with ID E003\n";
       std::cout << "Employee Salary: " << emp->getEmployeeSalary() << "\n";
   } else {
       std::cout << "Employee with ID E003 not found\n";
   }

   // Test FindCombinedSalary function
   double combinedSalary = FindCombinedSalary(employees);
   std::cout << "Combined salary of all employees: " << combinedSalary << "\n";

   return 0;
}