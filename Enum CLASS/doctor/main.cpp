#include "Doctor.h"
#include "Speciality.h"

void demo()
{
    Doctor *d1=new Doctor("doc101","Saksham",Speciality::CARDIO);
    Doctor *d2=new Doctor("doc102", "Anjali",Speciality::CARDIO);
    Doctor *d3=new Doctor("doc103","Ahamd",Speciality::PSYCO);

    Doctor* arr[3] = {d1,d2,d3};

    for(int i=0;i<3; i++)
    {
        delete arr[i];
    }
}
int main()
{
   
   
   demo();
}
