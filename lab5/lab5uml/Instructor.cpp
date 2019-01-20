/*
Andrew Sanchez
Filename: Instructor.cpp
Date: 5/8/17
description: derived class Instructor definition from base class Person
*/

#include "Instructor.h"
#include <string>
#include <iostream>

using namespace std;

//default constructor
Instructor::Instructor(): Person(), salary(0) {}

//constructor @param Person( string n, string d, string g), int s)
Instructor::Instructor(string n, string d, string g, int s): Person(n, d, g), salary(s) {}

//prints out "Mr " if "M" or "Ms "
void Instructor::print()
{
    if (gender == "M")
        cout << "Mr. ";
    else // assuming gender == "F"
        cout << "Ms. ";
    Person::print();
    cout << "    Instructor, Salary: " << salary << endl;
}

