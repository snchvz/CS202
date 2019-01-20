/*
Andrew Sanchez
Date: 5/7/17
Filename: HourlyWorker.cpp
Description: class HourlyWorker definition derived from base class Worker
*/

#include <string>
#include "HourlyWorker.h"

using namespace std;

//constructor @param n, s passes through Base class Worker constructor
HourlyWorker::HourlyWorker(string n, double s): Worker(n, s)
{}

//computes pay for hourly wage
double HourlyWorker::compute_pay(int h)
{
    
    if (h <= 40){
        return salary*h;
    } else return (salary*40) + (h-40)*salary*1.5;
        
} 
        
