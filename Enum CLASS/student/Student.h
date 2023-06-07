#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;

class Student {
public:
Student() = default;

Student(string erpNumber, int practicalMarks, int theoryMarks, Branch branch) :
erpNumber(erpNumber),
practicalMarks(practicalMarks),
theoryMarks(theoryMarks),
branch(branch) {}

~Student() {}

string getErpNumber() const { return erpNumber; }

void setErpNumber(string erpNumber) { this->erpNumber = erpNumber; }

int getPracticalMarks() const { return practicalMarks; }

void setPracticalMarks(int practicalMarks) { this->practicalMarks = practicalMarks; }

int getTheoryMarks() const { return theoryMarks; }

void setTheoryMarks(int theoryMarks) { this->theoryMarks = theoryMarks; }

Branch getBranch() const { return branch; }

void setBranch(Branch branch) { this->branch = branch; }

friend ostream& operator<<(ostream& os, const Student& student) {
os << "Student{" << student.erpNumber << ", " << student.practicalMarks << ", " << student.theoryMarks;
return os;
}

private:
string erpNumber;
int practicalMarks;
int theoryMarks;
Branch branch;
};

#endif // STUDENT_H
