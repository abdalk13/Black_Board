//
// Created by phili on 2022-04-15.
//

#include "Student.h"
#include "StudyProgramInstance.h"
#include <string>
#include <iostream>

using namespace std;

StudyProgramInstance::StudyProgramInstance() {
    this->name = "";
    this->code = "";
    this->startYear = -1;
}


StudyProgramInstance::StudyProgramInstance(string name, string code, int startYear) {
    this->name = name;
    this->code = code;
    this->startYear = startYear;
}

void StudyProgramInstance::printProgramInstance() {
    cout << "Program instance information" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Code: " << this->code << endl;
    cout << "Start Year: " << this->startYear << endl;
    cout << "Amount of students: " << this->enrolledStudents.size() << endl;
    for(Course c: this->courses){
        c.printCourse();
    }
    for(Student s: this->enrolledStudents){
        s.info();
    }
}
