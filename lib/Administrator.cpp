//
// Created by phili on 2022-04-20.
//

#include "Administrator.h"
#include "Teacher.h"
#include "Student.h"
#include "StudyProgram.h"
#include "StudyProgramInstance.h"
#include "Course.h"
#include "CourseInstance.h"
#include <string>
#include <iostream>

using namespace std;

Administrator::Administrator() {
    this->name = "";
    this->email = "";
    this->phoneNumber = -1;
    this->officeNumber = -1;
}

Administrator::Administrator(string name, string email, int phoneNumber, int officeNumber) {
    this->name = name;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->officeNumber = officeNumber;
}

void Administrator::enrollStudentStudyProgram(Student& student, StudyProgramInstance& program) {
    program.enrolledStudents.push_back(student);
}

void Administrator::enrollStudentCourse(Student& student, CourseInstance& course) {
    course.students.push_back(student);
}

void Administrator::assignTeacherToCourseInstance(Teacher& teacher, CourseInstance& course) {
    course.teachers.push_back(teacher);
}

Teacher Administrator::createTeacher() {
    string name, email;
    int phoneNumber, officeNumber;

    cout << "[Admin] Create teacher" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Phone Number: ";
    cin >> phoneNumber;
    cout << "Office Number: ";
    cin >> officeNumber;

    return Teacher(name, email, phoneNumber, officeNumber);
}

Student Administrator::createStudent() {
    string name, email;
    int phoneNumber, classYear, studentId;

    cout << "[Admin] Create student" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Phone Number: ";
    cin >> phoneNumber;
    cout << "Class year: ";
    cin >> classYear;
    cout << "Student Id: ";
    cin >> studentId;
    return Student(name, email, phoneNumber, classYear, studentId);
}

Administrator Administrator::createAdministrator() {
    string name, email;
    int phoneNumber, officeNumber;

    cout << "[Admin] Create administrator" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Phone Number: ";
    cin >> phoneNumber;
    cout << "Office Number: ";
    cin >> officeNumber;

    return Administrator(name, email, phoneNumber, officeNumber);
}


StudyProgram Administrator::createProgram() {
    string name, code;
    cout << "[Admin] Create study program" << endl;
    cout << "Course name: ";
    cin >> name;
    cout << "Course code: ";
    cin >> code;

    return StudyProgram(name, code);
}

StudyProgramInstance Administrator::createProgramInstance() {
    string name, code;
    int startYear;
    cout << "[Admin] Create study program instance" << endl;
    cout << "Course name: ";
    cin >> name;
    cout << "Course code: ";
    cin >> code;
    cout << "Start year: ";
    cin >> startYear;

    return StudyProgramInstance(name, code, startYear);
}

Course Administrator::createCourse() {
    string name, code;
    int points, year, period;

    cout << "[Admin] Create course" << endl;
    cout << "Course name: ";
    cin >> name;
    cout << "Course code: ";
    cin >> code;
    cout << "Course points: ";
    cin >> points;
    cout << "Course year: ";
    cin >> year;
    cout << "Course period (1,2,3,4): ";
    cin >> period;

    return Course(name, code, points, year, period);
}

CourseInstance Administrator::createCourseInstance() {
    return CourseInstance();
}

std::string Administrator::info() const {
    return
    "Name: " + this->name
    + " Email: " + this->email
    + " Office Number: " + to_string(this->officeNumber)
    + " Phone Number: " + to_string(this->phoneNumber);
}

void Administrator::hello() const {
    Teacher::hello();
}
