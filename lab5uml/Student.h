#ifndef Student_h
#define Student_h

#include "Person.h"
#include "string.h"


class Student : public Person, public Person {

 public:

    Student();

    Student(string n, string d, string g, string m);

    virtual void print();


 protected:
    string major;
};

#endif // Student_h
