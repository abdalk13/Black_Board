//
// Created by phili on 2022-04-26.
//

#pragma once

#include "Course.h"
#include <vector>

class WhatCourse {
public:
    virtual std::vector<Course> whatCourses() = 0;
};

