//
// Created by phili on 2022-04-14.
//

#pragma once

#include <string>

class Course {
public:
    std::string name;
    std::string code;
    int points;
    int year;
    int period;

    Course();
    Course(std::string name, std::string code, int points, int year, int period);

    void printCourse();
};