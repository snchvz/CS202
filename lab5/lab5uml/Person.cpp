/*
Andrew Sanchez
Filename: Person.cpp
Date: 5/8/17
Description: base class Person definition
*/

#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

//default constructor
Person::Person(): name(" "), dob( " "), gender(" ") {}

//contructor @param string n, string d, string g
Person::Person(string n, string d, string g): name(n), dob(d), gender(g) {}

//prints out name and date of birth
void Person::print()
{ 
    cout << name << " " << dob << endl;
}
