#pragma once
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

class Roster {
public:

    Student* classRosterArray[5];

    Roster() {
        for (int i = 0; i < 5; i++) {
            classRosterArray[i] = nullptr;
        }
    }

    void add(string studentId, string firstName, string lastName, string emailAddress, int age,
             int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    void remove(string studentId);
    void printAll();
    void printAverageDaysInCourse(string studentId);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

    ~Roster();
};