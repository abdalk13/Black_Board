//
// Created by phili on 2022-04-14.
//

#include "Assignment.h"
#include <string>

using namespace std;

Assignment::Assignment() {
    this->score = -1;
    this->deadline = "";
}

Assignment::Assignment(int score, string deadline) {
    this->score = score;
    this->deadline = deadline;
}

