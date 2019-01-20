/*
Andrew Sanchez
File name: Employee.cpp
Date: 4/19/17
Description: define class Employee
percentage: 100%
*/

#include "Employee.h"

using namespace std;

Employee::Employee(): name(""), salary(0) {}

Employee::Employee(string n, double s): name(n), salary(s) {}

string Employee::get_name()
{
    return name;
}

double Employee::get_salary()
{
    return salary;
}

void Employee::set_salary(double s)
{
    salary = s;
}
