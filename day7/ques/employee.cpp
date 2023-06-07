#include "employee.h"

Employee::Employee(const std::string& id, double salary, Department dept)
   : employeeId(id), employeeSalary(salary), department(dept) {}

std::string Employee::getEmployeeId() const {
   return employeeId;
}

double Employee::getEmployeeSalary() const {
   return employeeSalary;
}

Department Employee::getDepartment() const {
   return department;
}

void Employee::setEmployeeId(const std::string& id) {
   employeeId = id;
}

void Employee::setEmployeeSalary(double salary) {
   employeeSalary = salary;
}

void Employee::setDepartment(Department dept) {
   department = dept;
}

double Employee::addSalaries(const Employee& other) const {
   return employeeSalary + other.employeeSalary;
}