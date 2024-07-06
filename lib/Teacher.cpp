//
// Created by phili on 2022-04-20.
//

#include "Teacher.h"
#include "CourseInstance.h"
#include <string>
#include <iostream>

using namespace std;

Teacher::Teacher() {
    this->name = "";
    this->email = "";
    this->phoneNumber = -1;
    this->officeNumber = -1;
}

Teacher::Teacher(string name, string email, int phoneNumber, int officeNumber) {
    this->name = name;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->officeNumber = officeNumber;
}

void Teacher::printTeacherCourses() {
    cout << "Teacher has " << this->courses.size() << " courses" << endl;
    for(CourseInstance c: courses){
        cout << "My course" << endl;
    }
}

string Teacher::info() const {
    return
        "Name: " + this->name
        + " Email: " + this->email
        + " Office Number: " + to_string(this->officeNumber)
        + " Phone Number: " + to_string(this->phoneNumber);
}

void Teacher::hello() const {
    cout << "Hello my name is " << this->name << endl;
}

