/*
Andrew Sanchez
File name: Staff.cpp
Date: 4/19/17
Description: Define class Staff
Percentage: 50%
could not get to prevent adding multiple employees of same name
*/

#include <iostream>
#include <string>
#include <vector>

#include "staff.h"

using namespace std;

int Staff::find(string n)
{
    for (int i = 0; i < members.size(); i++)
        if (members[i].get_name() == n)
            return i;
    return -1;
}

void Staff::add_employee(Employee e)
{

   /* if (members.find(e) == i)
        cout << "employee already exists" << endl;
    else*/  members.push_back(e);
}

void Staff::raise_salary(string n, int percent)
{
    double salary;

    int raised_amount;
    int i = find(n);
    if (i == -1) {
        cout << "Couldn't find " << n << endl;
    } else {
        cout << percent;
        cout << "%" << endl;
        salary = members[i].get_salary();
        raised_amount = salary * percent/100;
        cout << "Amount Raised: ";
        cout << raised_amount << endl;
        salary += raised_amount;
        members[i].set_salary(salary);

    }
}

void Staff::print()
{
    for (int i = 0; i < members.size(); i++)
        cout << members[i].get_name() << " " << members[i].get_salary() << endl;
}
