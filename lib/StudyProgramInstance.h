//
// Created by phili on 2022-04-15.
//

#pragma once

#include "Student.h"
#include "StudyProgram.h"
#include <vector>
#include <string>

class Student;

class StudyProgramInstance: public StudyProgram {
public:
    int startYear;
    std::vector<Student> enrolledStudents; // int should be Student

    StudyProgramInstance();
    StudyProgramInstance(std::string name, std::string code, int startYear);

    void printProgramInstance();
};


