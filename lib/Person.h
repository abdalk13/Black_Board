//
// Created by phili on 2022-04-14.
//

#pragma once

#include <string>

class Person {
public:
    std::string name;
    std::string email;
    int phoneNumber;

    virtual void hello() const = 0;
};