/*
Andrew Sanchez
Filename: Person_main.cpp
Date: 5/8/17
Description: displays output of objects instructor and student derived from base class Person
Solution: uses derived classes from a base class to create a vector of pointers and output correct functions of derived classes using polymorphism
*/

#include <iostream>
#include <string> 
#include <vector>

#include "Student.h"
#include "Instructor.h"

using namespace std;

main()
{
    vector<Person *> people(4);
    
    people[0] = new Person("Jill", "3/11/70", "F");
    people[1] = new Student("Sam", "5/4/94", "M", "CS");
    people[2] = new Instructor("Bryan", "9/9/77", "M", 11000);
    people[3] = new Instructor("Felicia", "1/19/81", "F", 20000);

    for (int i = 0; i < people.size(); i++)
        people[i] -> print();

    Person p = *(people[2]);
    p.print();

   //clean up
    for (int i = 0; i < people.size(); i++)
        delete people[i];
}
