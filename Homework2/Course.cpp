/*
Andrew Sanchez
Filename: Course.cpp
Date: 4/29/17
Description: Course Class define 
Percentage: 100
*/

#include "Course.h"


using namespace std;
//constructor with null values
Course::Course()
{
    course_num = " "; 
    enrolled = 0;
}
//constructor with given values
Course::Course(Student* e, string n)
{
    course_num = n;
    enrolled = e;
}
//return course_num
string Course::get_course()
{
    return course_num;
}
//return pointer to Student*
Student* Course::get_student()
{ 
   return enrolled;
}
