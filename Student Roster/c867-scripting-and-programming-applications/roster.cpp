#include "roster.h"
#include <iostream>

using namespace std;

void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age,
    int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)

    { 
        int days[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i] == nullptr) {
                classRosterArray[i] = new Student(studentId, firstName, lastName, emailAddress, age, days, degreeProgram);
                break;
            }
    }
  }
  //remove

  void Roster::remove(string studentId) {
    bool found = false;
//double check
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentId() == studentId ) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Error: Student with ID " << studentId << " not found." << endl;
    }
  }
//print
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}
//print invalid emails
void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            string email = classRosterArray[i]->getEmailAddress();
            if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
                cout << "Invalid email: " << email << endl;
            }
        }
    }
}

//print avg days
void Roster::printAverageDaysInCourse(string studentId) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentId() == studentId) {
            
            const int* days = classRosterArray[i]->getDaysToComplete();
            int avg = (days[0] + days[1] + days[2]) / 3;
            cout << "Average days in course for " << studentId << ": " << avg << endl;
            return;
        }
    }
}

//print degreeprogram
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getDegreeProgram() == degreeProgram){

            classRosterArray[i]->print();
        }
    }
}

//destructor
Roster::~Roster() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
        }
    }
}

