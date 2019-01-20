/*
Andrew Sanchez
date:6/4/17
filename: Stack.h
description: template for typename T. Class Stack created for Template T to be used as any type of stack of typename
Percentage:100
*/

#ifndef STACK_H
#define STACK_H

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class Stack
{
    vector<T> container;
public:
    Stack(): container() {}
    void push(T x) {container.push_back(x); }
    void pop() {if (!empty()) container.pop_back(); else cout << "Stack is empty" << endl; }
    T top() {return container.back(); }
    bool empty() {return container.empty(); }
};

#endif

