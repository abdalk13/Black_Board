//
// Created by phili on 2022-04-20.
//

#pragma once

#include "Teacher.h"
#include "Student.h"
#include "StudyProgram.h"
#include "StudyProgramInstance.h"
#include "Course.h"
#include "CourseInstance.h"
#include "Administrator.h"
#include "Info.h"
#include <string>

class Administrator: public Teacher{
public:
    Administrator();
    Administrator(std::string name, std::string email, int phoneNumber, int officeNumber);

    virtual void hello() const;
    virtual std::string info() const;

    void enrollStudentStudyProgram(Student& student, StudyProgramInstance& program);
    void enrollStudentCourse(Student& students, CourseInstance& course);
    void assignTeacherToCourseInstance(Teacher& teacher, CourseInstance& course);
    Teacher createTeacher();
    Student createStudent();
    StudyProgram createProgram();
    StudyProgramInstance createProgramInstance();
    Course createCourse();
    CourseInstance createCourseInstance();
    Administrator createAdministrator();
};


