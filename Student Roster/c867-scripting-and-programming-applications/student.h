#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    DegreeProgram degreeProgram;

public:
//constructor
    Student(string studentId,
            string firstName,
            string lastName,
            string emailAddress,
            int age,
            const int daysToComplete[3],
            DegreeProgram degreeProgram);
//accessor
    string getStudentId() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    const int* getDaysToComplete() const; 
    DegreeProgram getDegreeProgram() const;

//mutators
    void setStudentId(string studentId);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(const int daysToComplete[3]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    void print() const;
    
};