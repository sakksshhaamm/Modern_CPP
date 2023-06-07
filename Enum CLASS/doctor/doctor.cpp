#include "doctor.h"
#include "Speciality.h"

//Initialization of Parameterized Constructor with 2 parameters id, name
Doctor::Doctor(std::string id, std::string name): doctorID(id), doctorName(name){}

//Initialization of Parameterized Constructor with 3 parameters id, name, speciality
Doctor::Doctor(std::string id, std::string name, enum class Speciality sp): doctorID(id), doctorName(name),
doctorSpeciality(sp){}


//Destructor 
Doctor::~Doctor()
{
    std::cout<<"Doctor with ID: "<<this->doctorID<<" is destroyed\n";
}

std::string displayEnumValue(enum class Speciality sp)
{
    if(sp==Speciality::GYNO){
        return "GYNO";
    }
    else if(sp==Speciality::CARDIO){
        return "CARDIO";
    }
    else if(sp==Speciality::ORTHO){
        return "ORTHO";
    }
    else{
        return "PSYCO";
    }
}
//Generate Stream Ouput Operator <<
std::ostream &operator<<(std::ostream &os, const Doctor &rhs) {
    os << "doctorID: " << rhs.doctorID
       << " doctorName: " << rhs.doctorName
       << " doctorSpeciality: " <<displayEnumValue(rhs.doctorSpeciality);
    return os;
}
