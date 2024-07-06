//
// Created by phili on 2022-04-14.
//

#include "Course.h"
#include <string>
#include <iostream>

using namespace std;

Course::Course() {
    this->name = "";
    this->code = "";
    this->points = -1;
    this->year = -1;
    this->period = -1;
}

Course::Course(string name, string code, int points, int year, int period) {
    this->name = name;
    this->code = code;
    this->points = points;
    this->year = year;
    this->period = period;
}

void Course::printCourse() {
    cout << "Course information" << endl;
    cout << "Name: " << name << endl;
    cout << "Code: " << code << endl;
    cout << "Points: " << points << endl;
    cout << "Year: " << year << endl;
    cout << "Period: " << period << endl;
}


