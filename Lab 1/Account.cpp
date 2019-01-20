/*
Andrew Sanchez
File name: Account.cpp
Date: 04/03/2017
Description: defining functions of Account.h
percentage done: 100
*/

#include <iostream>
#include "Account.h"

using namespace std;

Account::Account()
{
    balance = 0;
    interest_rate = 0;
}

Account::Account(double amount,double rate)
{
    balance = amount;
    interest_rate = rate;
}

void Account::deposit(double amount)
{
    balance += amount;
}

bool Account::withdraw(double amount)
{
    bool status;
	
    if (amount > balance) {
        balance -= 5; //penalty
        status = false;
    } else {
        balance -= amount;
        status = true;
    }
    return status;
}

double Account::query()
{
    return balance;
}

void Account::set_interest_rate(double rate)
{
    interest_rate = rate/100;
}

double Account::get_interest_rate()
{
   return interest_rate;
}

void Account::add_interest()
{
    double interest;
    interest = balance * interest_rate;
    balance = balance + interest;
}



















