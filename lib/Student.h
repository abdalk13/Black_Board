//
// Created by phili on 2022-04-14.
//

#pragma once

#include "Course.h"
#include "StudyProgramInstance.h"
#include "Person.h"
#include "Info.h"
#include <vector>
#include <string>
#include <string>

class StudyProgramInstance;

class Student: public Person, public Info {
public:
    int classYear;
    int studentId;
    StudyProgramInstance program;
    std::vector<Course> courses;

    Student();
    Student(std::string name, std::string email, int phoneNumber, int classYear, int studentId);

    virtual void hello() const;
    virtual std::vector<Course> whatCourses();
    virtual std::string info() const;
};


