//
// Created by phili on 2022-04-20.
//

#pragma once

#include "StudyProgram.h"
#include "Course.h"
#include "Student.h"
#include "Teacher.h"
#include "Administrator.h"
#include "Info.h"
#include <vector>
#include <iostream>

class Blackboard {
public:
    std::vector<StudyProgram> studyProgram;
    std::vector<Course> course;
    std::vector<Student> student;
    std::vector<Teacher> teacher;
    std::vector<Administrator> administrator;

    template<class T> void print(T person) const { std::cout << person.info() << std::endl; };
    void printEveryoneInCoures(CourseInstance course) const;
};



