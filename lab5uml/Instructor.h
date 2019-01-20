#ifndef Instructor_h
#define Instructor_h

#include "Person.h"
#include "int.h"
#include "string.h"


class Instructor : public Person, public Person {

 public:

    Instructor();

    Instructor(string n, string d, string g, int s);

    virtual void print();


 protected:
    int salary;
};

#endif // Instructor_h
