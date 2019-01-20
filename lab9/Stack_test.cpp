/*
Andrew Sanchez
Filename: Stack_test.cpp
Date: 6/4/17
description: program takes different types of Stack and displays contents while deleting the contents
solution: program uses a template class for Stack typename to go from integers to strings. displays contents and deletes values by using class member functions. checks for segmentation fault if a pop_back is used after the stack is already at 0.
percentage:100
*/

#include <iostream> 
#include <string>

#include "Stack.h"

main()
{
    Stack<int> s1;

    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    
    while (!s1.empty()){ 
        cout << s1.top() << endl;
        s1.pop();
    }

    Stack<string> s2;
    s2.push("Yoda said ");
    s2.push("something ");
    s2.push("to write " );
    
    while (!s2.empty()){
        cout << s2.top();
        s2.pop();
    }
    cout << endl;
    s2.pop();//check for segmentation fault
}
  
