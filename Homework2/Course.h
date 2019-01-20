/*
Andrew Sanchez
Filename: Course.h
Date: 4/29/17
Description: class Course with int course number and pointer to Student objects
*/

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "Student.h"

using namespace std;

class Course
{
    private:
        string course_num;
        Student* enrolled;
    public:
        Course();
        Course(Student* e, string n);
        string get_course_number();
        Student* get_student();
        string get_course();
};

#endif
