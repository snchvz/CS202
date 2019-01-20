/*
Andrew Sanchez
Date: 5/7/17
Filename: Worker.cpp
Description: class Worker definition
*/

#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

//default constructor
Worker::Worker()
{
    name = " ";
    salary = 0;
}

//constructor
Worker::Worker(string n, double s)
{
    name = n;
    salary = s;
}

//returns name
string Worker::get_name() const
{
    return name;
}

//returns salary
double Worker::get_salary()
{
    return salary;
}

//computes pay 
double Worker::compute_pay(int h)
{
    return salary*h;
}


