#include "student.h"
#include <iostream>
using std::string; 
using namespace std;

//constructor
Student::Student(
    string studentId,
    string firstName,
    string lastName,
    string emailAddress,
    int age,
    const int daysToComplete[3],
    DegreeProgram degreeProgram) {

    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;  

    for (int i = 0; i < 3; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
    this->degreeProgram = degreeProgram;
}

//accessor
string Student::getStudentId() const {return studentId; }
string Student::getFirstName() const {return firstName; }
string Student::getLastName() const {return lastName; }
string Student::getEmailAddress() const {return emailAddress; }
int Student::getAge() const {return age; }
const int* Student::getDaysToComplete() const {return daysToComplete; }
DegreeProgram Student::getDegreeProgram() const {return degreeProgram; }

//mutator
void Student::setStudentId(string studentId) {this->studentId= studentId; }
void Student::setFirstName(string firstName) {this->firstName = firstName; }
void Student::setLastName(string lastName) {this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) {this->emailAddress = emailAddress; }
void Student::setAge(int age) {this->age = age; }

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

//print
void Student::print() const{
    cout << studentId << "\t"
         << "First Name: " << firstName << "\t"
         << "Last Name: " << lastName << "\t"
         << "Email: " << emailAddress << "\t"
         << "Age: " << age << "\t"
         << "daysInCourse: {"
         << daysToComplete[0] << ", "
         << daysToComplete[1] << ", "
         << daysToComplete[2] << "} "
         << "Degree Program: ";
    
    switch (degreeProgram) {
        case SECURITY: cout << "Security"; break;
        case NETWORK: cout << "Network"; break;
        case SOFTWARE: cout << "Software"; break;
    }
    
    cout << endl;
}