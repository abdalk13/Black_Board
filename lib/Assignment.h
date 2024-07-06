//
// Created by phili on 2022-04-14.
//

#pragma once

#include "Assessment.h"
#include <string>

class Assignment: public Assessment {

public:
    Assignment();
    Assignment(int score, std::string deadline);
};
