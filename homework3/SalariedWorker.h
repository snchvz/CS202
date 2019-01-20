/*
Andrew Sanchez
Filename: SalariedWorker.h
Date: 5/7/17
Description: Class initialization of SalariedWorker derived from base class Worker
*/

#ifndef SALARIEDWORKER_H
#define SALARIEDWORKER_H

#include <iostream>
#include <string>

#include "Worker.h"

using namespace std;

class SalariedWorker: public Worker
{
    public:
        ~SalariedWorker(){}; 
        SalariedWorker();
        SalariedWorker(string n, double s);
        double compute_pay(int h);
};

#endif
