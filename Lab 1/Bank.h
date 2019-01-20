/*
Andrew Sanchez
File Name: Bank.h
Date:4/10/17 
Description: file for class Bank
percentage done: 100%
*/

#ifndef BANK_H
#define BANK_H

#include <string>
#include "Account.h"

using namespace std;

class Bank {
private:
    Account savings;
    Account checkings;
public:
    Bank();
    Bank(double savings_amount, double checking_amount);
    void deposit(double amount, string account);
    void withdraw(double amount, string account);
    void transfer(double amount, string account);
    void print_balances();
};

#endif
