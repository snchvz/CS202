/* 
Andrew Sanchez
Filename: Student_main.cpp
Date: 4/20/17
Description: puts students into course using pointers
percentage: 100
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Student.h"
#include "Course.h"

using namespace std;

//find Student* @param string n, @param vector s
Student* find(string n, vector<Student*> s)
{
    for (int i = 0; i < s.size(); i++)
        if (n == s[i]->get_name())
            return s[i];
    return 0;   
} 

main()
{
    vector<Student*> students;
    vector<Course*> courses;

    string student_name;
    int student_id;
    string course_number;

    ifstream in1, in2;
     
    in1.open("students");
    if (!in1.is_open()){
        cout << "Couldn't open 'students'" << endl;
        return 1;
    }
 
    in1 >> student_name >> student_id;
    while (!in1.eof()){
        students.push_back(new Student(student_name, student_id));
        in1 >> student_name >> student_id;
    }

    in2.open("courses");
    if (!in2.is_open()){
        cout << "couldn't open 'courses'" << endl;
        return 2;
    }
    
    in2 >> student_name >> course_number;
    while (!in2.eof()){
        courses.push_back(new Course(find(student_name, students), course_number));
        in2 >> student_name >> course_number; 
    }

 
    string course_search;

    cout << "Please enter a course name: CSE202, PHYS221, MATH272, HIST101" << endl;
    cin >> course_search;
    
    // display all students enrolled within giving course name    
    bool check_course = false;
    while (check_course == false){
        for (int j = 0; j < courses.size(); j++){
            if (courses[j] -> get_course() == course_search){
                check_course = true;
                cout <<  courses[j] -> get_student() -> get_name() << endl;
            }        
        
        }
    
        if (check_course == false){
            cout << "course not found" << endl;
            cin >> course_search;
        }
    }
    int x;

    //delete all new values
    for (x = 0; x < students.size(); x++)
        delete students[x];

    for (x = 0; x < courses.size(); x++)
        delete courses[x];

    cout<< endl;

   
}
