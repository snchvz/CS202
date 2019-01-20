/*
Andrew Sanchez
Filename: Bank_main.cpp
Date: 4/10/17
Description: deposits, withdraws , and transfers money from savings and checkings
percentage done: 100%
*/

#include <iostream>
#include <string>

#include "bank.h"

using namespace std;

main()
{
    Bank csusb_bank(1000, 100);

    csusb_bank.deposit(50, "S");
    csusb_bank.withdraw(10, "CH");
    csusb_bank.withdraw(10, "C");
    csusb_bank.transfer(40, "S");
    csusb_bank.withdraw(150, "C");
    csusb_bank.print_balances();
}

