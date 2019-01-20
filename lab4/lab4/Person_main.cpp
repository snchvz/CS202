/* 
Andrew Sanchez
Filename: Person_main.cpp
Date: 4/24/17
Description: lists names and takes user input to check popularity of named persons 
Percentage:100
*/

#include <iostream> // for setw
#include <iomanip> // for ifstream
#include <fstream>
#include <string>
#include <vector>

#include "Person.h"

using namespace std;

main()
{
    string name;
    vector <Person*> people; //vector of pointers to object of type person
    Person* person_pointer;

    ifstream in;

    in.open("names");
    if (!in.is_open()) {
        cout << "Couldn't open 'names' file.\n";
        return 1;
    }

    in >> name;
    while (!in.eof()) {
        bool check_duplicate = false;
        person_pointer = new Person(name);
        for (int i = 0; i < people.size(); i++){
            if (people[i] -> get_name() == name){
                check_duplicate = true;
            }
        }
        if (check_duplicate){
            cout << name << " already exists" << endl;
        } else people.push_back(person_pointer);
        

        in >> name;
    }
    
    in.close();
    int i = 0;
    int j;

    //for each person prompt for a best friend name
    
    while(i < people.size()){
        cout << "Who is " << people[i] -> get_name() << " 's best friend? ";
        cin >> name;

        //search for best friend
        for (j = 0; j < people.size(); j++)
            if (people[j] -> get_name() == name)
                break;
        if (j < people.size()){ // found best friend
            people[i] -> set_best_friend(people[j]);
            i++;
       } else
            cout << "couldn't find best friend " << name << endl;
    }
    //list of name, best friend, and popularity count
    for (i = 0; i < people.size(); i++){
        person_pointer = people[i];
        cout << left << setw(10) << person_pointer -> get_name();
        cout << left << setw(10) << person_pointer -> get_best_friend();
        cout << right << setw(2) << person_pointer -> get_popularity() << endl;
    }
    
    //clean up
    for (i = 0; i < people.size(); i++)
        delete people[i];

}
