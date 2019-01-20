/*
Andrew Sanchez
Filename: Student.cpp
Date: 5/8/17
description: derived class Student definition from base class Person
*/

#include <iostream>
#include "Student.h"
#include <string>

using namespace std;

//default constructor
Student::Student(): Person()
{
    major = " ";
}

//constructor @param Person( string n, string d, string g), string m
Student::Student(string n, string d, string g, string m): Person(n, d, g)
{
    major = m;
}

//prints out major
void Student::print()
{
    Person::print(); 
    cout << "    student, Major: " << major << endl;
}
