#include <iostream>
#include "person.h"
using namespace std;

int main() {

    Person person;

    Person person1("Bob", 23);

    int nValue = 0;

    int* pnValue = &nValue;

    string manyStrings[] = {"one", "two", "three", "four", "Five", "six"};

    string* pString = manyStrings;

    cout << "this is the p string: " << *pString << endl;

    pString += 3;
    cout << "this is the p string +3: " << *pString << endl;


    cout << "Person 1: " << person.toString() << endl;
    cout << "Person 2: " << person1.toString() << endl;

    cout << "Pointer to int value: " << pnValue << endl;

    cout << "Int value via pointer: " << *pnValue << endl;


    return 0;
}