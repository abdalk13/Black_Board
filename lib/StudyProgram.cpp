//
// Created by phili on 2022-04-14.
//

#include "StudyProgram.h"
#include "Course.h"
#include <string>
#include <iostream>

using namespace std;

StudyProgram::StudyProgram() {
    this->name = "";
    this->code = "";
}

StudyProgram::StudyProgram(string name, string code) {
    this->name = name;
    this->code = code;
}

void StudyProgram::printProgram() {
    cout << "Program information" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Code: " << this->code << endl;
    for(Course c: this->courses){
        c.printCourse();
    }
}

bool StudyProgram::appendCourse(Course course) {
    this->courses.push_back(course);
    return true;
}

vector<Course> StudyProgram::whatCourses() {
    return this->courses;
}
