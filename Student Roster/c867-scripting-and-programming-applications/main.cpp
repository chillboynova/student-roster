#include <iostream>
#include "roster.h"

using namespace std;

int main() {

    cout << "Course: C867 - Scripting and Programming Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "WGU Student ID: 011962386 " << endl;
    cout << "Name: Kaleb Willis" << endl << endl;

    Roster classRoster;

    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Kaleb", "Willis", "Kalebwillis111@gmail.com", 25, 20, 40, 30, SOFTWARE);

    cout << "Displaying all students:" << endl;
    classRoster.printAll();
    cout << endl;

    cout << "Displaying invalid emails:" << endl;
    classRoster.printInvalidEmails();
    cout << endl;

    cout << "Displaying average days in course for each student:" << endl;
    for (int i = 0; i < 5; i++) {
        if (classRoster.classRosterArray[i] != nullptr) {
            string id = classRoster.classRosterArray[i]->getStudentId();
            classRoster.printAverageDaysInCourse(id);
        }
    }
    cout << endl;

    cout << "Showing students in degree program: SOFTWARE" << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;

    cout << "Removing A3..." << endl;
    classRoster.remove("A3");
    cout << endl;

    classRoster.printAll();
    cout << endl;

    cout << "Attempting to remove A3 again ..." << endl;
    classRoster.remove("A3");
    cout << endl;

    cout << "Press Enter to exit...";
    cin.get();
    cin.get();

    return 0;
}   