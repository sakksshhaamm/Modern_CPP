#ifndef DOCTOR_H
#define DOCTOR_H

#include <cstdint>
#include <iostream>
#include "Speciality.h"

/*
A class called Doctor
 - doctorID of type string
 - doctorName of type string
 - doctorSpeciality of type "enum class Speciality"
  
 - Disabled default constructor
 - A copy construtor that is also disabled
 - A parameterized constructor that takes id, name
 - A parameterized constructor that takes id, name and speciality

 - A destructor method

*/
class Doctor
{
private:
    std::string doctorID;
    std::string doctorName;
    enum class Speciality doctorSpeciality;
public:
    Doctor()=delete;
    Doctor(const Doctor& doc)=delete;
    Doctor(std::string id, std::string name);
    //enum class Class_name must while initializing
    Doctor(std::string id, std::string name, enum class Speciality sp);
    ~Doctor();

    std::string getDoctorID() const { return this->doctorID; }
    void setDoctorID(const std::string &doctorID) { this->doctorID = doctorID; }

    std::string getDoctorName() const { return this->doctorName; }
    void setDoctorName(const std::string &doctorName) { this->doctorName = doctorName; }

    friend std::ostream &operator<<(std::ostream &os, const Doctor &rhs);
};

std::string displayEnumValue(enum class Speciality sp);
#endif // DOCTOR_H

