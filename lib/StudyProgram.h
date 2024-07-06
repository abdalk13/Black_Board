//
// Created by phili on 2022-04-14.
//

#pragma once

#include "Course.h"
#include "WhatCourse.h"
#include <string>
#include <vector>

class StudyProgram: public WhatCourse {
public:
    std::string name;
    std::string code;
    std::vector<Course> courses;

    StudyProgram();
    StudyProgram(std::string name, std::string code);

    virtual std::vector<Course> whatCourses();

    void printProgram();
    bool appendCourse(Course course);
};