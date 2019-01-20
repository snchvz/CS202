/*
Andrew Sanchez
File name: Bank.cpp
Date: 4/10/17
Description: class implementation of Bank.h
percentage done: 50%
*/

#include <iostream>
#include "Account.h"
#include "Bank.h"
#include <string>

using namespace std;

Bank::Bank()
{
    savings = 0;
    checkings = 0;
}

Bank::Bank(double savings_amount, double checking_amount)
{
    savings = savings_amount;
    checkings = checking_amount;
}

void Bank::deposit(double amount, string account)
{
    if (account == "S"){
        savings = savings + amount;
    } else if (account == "C"){
        checkings = checkings + amount;
    } else cout << "Invalid entry" << endl;
}

void Bank::withdraw(double amount, string account)
{
    if (account == "S"){
        savings = savings -  amount;
    } else if (account == "C"){
        checkings = checkings - amount;
    } else cout << "Invalid entry" << endl;
}

void Bank::transfer(double amount, string account)
{
    if (account == "S"){
        savings = savings - amount;
        checkings = checkings + amount;
    } else if (account == "C"){
        checkings = checkings -  amount;
        savings = savings +  amount;
    } else cout << "Invalid entry" << endl;
}

void Bank::print_balances()
{
    
    cout << "savings: " <<  savings << endl;
    cout << "checkings: " << checkings << endl;
}
