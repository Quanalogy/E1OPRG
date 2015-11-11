//
// Created by Munke on 28-10-2015.
//

#include "Person.h"
#include <sstream>

Person::Person(){
    name = "Undefined";
    age = 0;
}

string Person::toString(){
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}