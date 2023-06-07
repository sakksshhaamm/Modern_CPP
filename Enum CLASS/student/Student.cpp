#include <iostream>
#include "studentBranch.h"
#include "Student.h"
Student *students[5];

using namespace std;
int main()
{

    students[0] = new Student("1234567890", 90, 80, Branch::SCIENCE);
    students[1] = new Student("9876543210", 80, 90, Branch::COMMERCE);
    students[2] = new Student("0123456789", 70, 70, Branch::ARTS);
    students[3] = new Student("5555555555", 60, 60, Branch::SCIENCE);
    students[4] = new Student("4444444444", 50, 50, Branch::COMMERCE);

    for (int i = 0; i < 5; i++)
    {
        cout << students[i] << endl;
    }

    int totalMarks = FindtotalMarks(*students[0]);
    cout << "Total marks for student 1234567890: " << totalMarks << endl;

    bool studentFound = checkStudent("1234567890");
    if (studentFound)
    {
        cout << "Student with erp number 1234567890 found." << endl;
    }
    else
    {
        cout << "Student with erp number 1234567890 not found." << endl;
    }

    delete students[0];
    delete students[1];
    delete students[2];
    delete students[3];
    delete students[4];

    return 0;
}

int FindtotalMarks(const Student &student)
{
    return student.getPracticalMarks() + student.getTheoryMarks();
}

bool checkStudent(string erpNumber)
{
    for (int i = 0; i < 5; i++)
    {
        if (students[i]->getErpNumber() == erpNumber)
        {
            return true;
        }
    }

    return false;
}