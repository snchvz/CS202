
/*
Andrew Sanchez
File name: Account.h
Date: 04/03/2017
Description: balance account program
percentage done: 100
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    double balance;
    double interest_rate; // example: interest_rate = 6 means 6%
public:
    Account();
    Account(double amount, double rate);
    void deposit(double);
    bool withdraw(double); //returns true if enough money, returns false otherwise
    double query();
    void set_interest_rate(double);
    double get_interest_rate();
    void add_interest();
};

#endif
