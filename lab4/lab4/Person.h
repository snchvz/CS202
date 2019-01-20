#ifndef PERSON_H
#define PERSON_H

/*
Andrew Sanchez
Filename: Person.h
Date: 4/24/17
Description: class Person with string name, person* best_friend, and int popularity
*/

#include <string>

using namespace std;

class Person
{
    private:
        string name;
        Person* best_friend;
        int popularity;
    public:
        Person(): name(" "), best_friend(0), popularity(0) {}
        Person(string n): name(n), best_friend(0), popularity(0) {}
        string get_name();
        string get_best_friend();
        int get_popularity();
        void set_best_friend(Person *);
};

#endif
