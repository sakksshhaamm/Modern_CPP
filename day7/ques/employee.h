

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "department.h"

class Employee {
private:
   std::string employeeId;
   double employeeSalary;
   Department department;

public:
   Employee(const std::string& id, double salary, Department dept);
   std::string getEmployeeId() const;
   double getEmployeeSalary() const;
   Department getDepartment() const;
   void setEmployeeId(const std::string& id);
   void setEmployeeSalary(double salary);
   void setDepartment(Department dept);
   double addSalaries(const Employee& other) const;
};

#endif // EMPLOYEE_H
