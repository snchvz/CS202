/*
Andrew Sanchez
File name: Account_main.cpp
Date: 04/03/2017
Description: program to withdraw from account
percentage done: 100
*/

#include <iostream>
#include "Account.h"

using namespace std;

main()
{
    Account savings_interest(10000,6);	
    int year_counter = 0;

    cout << "initial balance: ";
    cout << savings_interest.query() << endl;
    cout << "interest rate: " << savings_interest.get_interest_rate() << "%" << endl;    
 
    savings_interest.set_interest_rate(6);
    
    // adds interest to inital balance until it reaches or exceeds 20000
    while (savings_interest.query() < 20000){
        savings_interest.get_interest_rate();     
        savings_interest.add_interest();
	savings_interest.query();
        year_counter++;
    }
    
    cout << endl;
    cout << "Ending balance: " << savings_interest.query() << endl;
    cout << endl;
    cout << "years it took to double: " << year_counter << endl;

}
