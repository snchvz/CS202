/*
Andrew Sanchez
Filename: Student.h
Date: 4/29/17
Description: Student class with string name and int id
percentage: 
*/

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        int id;
    public: 
        Student();
        Student(string n, int d);
        string get_name();
        int get_id_number();
        void print();
};

#endif

