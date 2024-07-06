//
// Created by phili on 2022-04-20.
//

#pragma once

#include "Course.h"
#include "Teacher.h"
#include "Student.h"
#include "Assignment.h"
#include "Exam.h"
#include <vector>

class Teacher;

class CourseInstance: public Course {
public:
    std::vector<Teacher> teachers;
    std::vector<Student> students;
    std::vector<Assignment> assignments;
    std::vector<Exam> exams;

    CourseInstance();
    CourseInstance(std::string name, std::string code, int points, int year, int period);

    void printEveryoneInCourse();
};