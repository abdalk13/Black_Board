//
//

#include "Blackboard.h"
#include "CourseInstance.h"
#include "Teacher.h"
#include "Student.h"

void Blackboard::printEveryoneInCoures(CourseInstance course) const {
    for(const Teacher& t: course.teachers){
        this->print(t);
    }
    for(const Student& s: course.students){
        this->print(s);
    }
}



