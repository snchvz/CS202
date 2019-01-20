/*
Andrew Sanchez
File name: main.cpp
Date: 4/19/17
Description: program finds employees and gives raises
*/

#include <iostream> 
#include <string>
#include <vector>

#include "Employee.h"
#include "staff.h"

using namespace std;

main()
{
    Staff company;
    string name;
    double salary;

    cout << "Enter a set of name, salary pairs, terminate with -1 -1\n";
    cin >> name >> salary;

    while (name != "-1"){
        company.add_employee(Employee(name, salary));

        cin >> name >> salary; 
    }

    string response;
    int percent;

    cout << "Raise anybody's salary? ";
    cin >> response;

    while (response == "yes" or response == "y") {
        cout << "Enter name and percent: ";
        cin >> name >> percent;
        company.raise_salary(name, percent);

        cout << "Raise anybody ele's salary? ";
        cin >> response;
    }
    company.print();
}
