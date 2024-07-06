//
// Created by phili on 2022-04-14.
//


#include "exam.h"
#include <string>

using namespace std;

Exam::Exam() {
    this->score = -1;
    this->deadline = "";
};

Exam::Exam(int score, string deadline)
{
    this->score = score;
    this->deadline = deadline;
}

