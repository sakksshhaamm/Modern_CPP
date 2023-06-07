

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

enum class Department {
   IT,
   HR,
   ADMIN,
   SALES
};

std::string departmentToString(Department dept);

#endif // DEPARTMENT_H
