/*
Andrew Sanchez
Filename: Student.cpp
Date: 4/29/17
Description: class define for Student
Percentage:100
*/

#include "Student.h"

using namespace std;
//constructor with null values
Student::Student()
{
    name = " ";
    id = 0;
}
//constructor within given values
Student::Student(string n, int d)
{
    name = n;
    id = d;
}
//returns name
string Student::get_name()
{
    return name;
}
//returns id
int Student::get_id_number()
{
    return id;
}
//prints out Student values
void Student::print()
{
    cout << name << " " << id << endl;
}

