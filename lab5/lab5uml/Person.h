/*
Andrew Sanchez
Filename: Person.h
Date: 5/8/17
Description: base class Person initialization
*/

#ifndef Person_h
#define Person_h

#include <string>

using namespace std;


class Person {

 public:

    Person();

    Person(string n, string d, string g);

    virtual void print();


 protected:
    string name;
    string dob;
    string gender;
};

#endif // Person_h
