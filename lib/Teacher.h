//
// Created by phili on 2022-04-20.
//

#pragma once

#include "Person.h"
#include "CourseInstance.h"
#include <vector>
#include <string>
#include "Info.h"

class CourseInstance;

class Teacher: public Person, public Info {
public:
    int officeNumber;
    std::vector<CourseInstance> courses;

    Teacher();
    Teacher(std::string name, std::string email, int phoneNumber, int officeNumber);

    virtual void hello() const;
    virtual std::string info() const;
    void printTeacherCourses();
};

