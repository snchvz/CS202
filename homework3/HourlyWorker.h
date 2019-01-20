/*
Andrew Sanchez
Filename: HourlyWorker.h
Date: 5/7/17
Description: Class HourlyWorker initialization derived from base class Worker
*/

#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include <iostream>
#include <string>

#include "Worker.h"

using namespace std;

class HourlyWorker: public Worker
{
    public:
        HourlyWorker();
        ~HourlyWorker(){};
        HourlyWorker(string n, double s);
        double compute_pay(int h);
};

#endif        
