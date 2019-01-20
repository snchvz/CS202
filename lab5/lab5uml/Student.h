/*
Andrew Sanchez
Filename: Student.h
Date: 5/8/17
Description: derived class Student from base class Person
*/

#ifndef Student_h
#define Student_h

#include "Person.h"
#include <string>

using namespace std;


class Student : public Person
{

 public:

    Student();

    Student(string n, string d, string g, string m);

    virtual void print();


 protected:
    string major;
};

#endif // Student_h
