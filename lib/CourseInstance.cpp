//
// Created by phili on 2022-04-20.
//

#include "CourseInstance.h"
#include <iostream>

using namespace std;

CourseInstance::CourseInstance() {

}

CourseInstance::CourseInstance(string name, string code, int points, int year, int period){
    this->name = name;
    this->code = code;
    this->points = points;
    this->year = year;
    this->period = period;
}

void CourseInstance::printEveryoneInCourse() {
    cout << "Teachers: " << this->teachers.size() << endl;
    cout << "Students: " << this->students.size() << endl;
    cout << "Assignments: " << this->assignments.size() << endl;
    cout << "Exams: " << this->exams.size() << endl;

}


