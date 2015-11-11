//
// Created by Munke on 28-10-2015.
//

#ifndef UDEMYLEARNINGAPP_PERSON_H
#define UDEMYLEARNINGAPP_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(string newName, int newAge){name = newName; age = newAge;};
    string toString();
};


#endif //UDEMYLEARNINGAPP_PERSON_H
