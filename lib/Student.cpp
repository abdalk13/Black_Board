//
// Created by phili on 2022-04-14.
//

#include "Student.h"
#include "StudyProgramInstance.h"
#include <string>
#include <iostream>

using namespace std;

Student::Student() {
    this->name = "";
    this->email = "";
    this->phoneNumber = -1;
    this->classYear = -1;
    this->studentId = -1;
}

Student::Student(string name, string email, int phoneNumber, int classYear, int studentId) {
    this->name = name;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->classYear = classYear;
    this->studentId = studentId;
}

string Student::info() const {
    return
        "Name: " + this->name
        + " Email: " + this->email
        + " Class Year: " + to_string(this->classYear)
        + " Student Id: " + to_string(this->studentId)
        + " Phone Number: " + to_string(this->phoneNumber);

}

vector<Course> Student::whatCourses() {
    return this->courses;
}

void Student::hello() const {
    cout << "Hello my name is " << this->name << endl;
}

