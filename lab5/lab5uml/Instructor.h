/*
Andrew Sanchez
Filename: Instructor.h
Date: 5/8/17
description: derived class Instructor from base class Person
*/


#ifndef Instructor_h
#define Instructor_h

#include "Person.h"
#include <string>

using namespace std;


class Instructor : public Person
{
 public:

    Instructor();

    Instructor(string n, string d, string g, int s);

    virtual void print();


 protected:
    int salary;
};

#endif // Instructor_h
