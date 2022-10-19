#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Person{

    public:
    Person();
    Person( const string, int);
    Person( const Person&);

    private:
    string name;
    int age;
};
#endif