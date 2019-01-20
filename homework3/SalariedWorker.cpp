/*
Andrew Sanchez
Filename: SalariedWorker.cpp
Date: 5/7/17
description: Class definition for SalariedWorker derived from base class Worker
*/

#include "SalariedWorker.h"

using namespace std;

//constructor @param n,s passes through Base class Worker constructor
SalariedWorker::SalariedWorker(string n, double s): Worker(n, s)
{}

//computes salary pay
double SalariedWorker::compute_pay(int h)
{
    return salary * h;
}

