/*
andrew sanchez
file name: Employee.h
Date: 4/19/17
Description: class Employee
Percentage: 100%
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
    private:
        string name;
        double salary;
    public:
        Employee();
        Employee(string n, double s);
        string get_name();
        double get_salary();
        void set_salary(double s);
};

#endif
