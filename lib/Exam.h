//
// Created by phili on 2022-04-14.
//

#pragma once

#include "Assessment.h"
#include <string>

class Exam: public Assessment {
public:
    Exam();
    Exam(int score, std::string deadline);
};