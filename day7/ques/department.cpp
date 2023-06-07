#include "department.h"

std::string departmentToString(Department dept) {
   switch (dept) {
       case Department::IT:
           return "IT";
       case Department::HR:
           return "HR";
       case Department::ADMIN:
           return "ADMIN";
       case Department::SALES:
           return "SALES";
       default:
           return "";
   }
}