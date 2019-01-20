/*
Andrew Sanchez
File name: Staff.h
Date: 4/19/17
Description: initialize class Staff
percentage: 100%
*/

#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;

class Staff
{
    private:
        vector<Employee> members;
        int find(string n); //returns position of n in members or -1 if not found
    public:
        Staff(){}
        void add_employee(Employee e); // better: const Employee &
        void raise_salary(string n, int percent);
        void print();
};

#endif
