/*
Andrew Sanchez
Filename: Count.cpp
Date: 5/8/17
Description: program checks word count, line count, and character count from files in directory
solution: using string streams and file streams, program can call a file and use string functions to check for word count, line count, and character count.
percentage: 100
*/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


using namespace std;

main()
{
    string file_name;    
    bool loop_check = false;// check loop if user wants to continue entering files    
    string check_another_file;

    while (!loop_check){
        string word, line;
        int chars = 0, words = 0, lines = 0;
        bool file_check = false; //check loop if file not found
        ifstream in1;

        cout << "Enter a file name to count." << endl;
        while (!file_check){
            cin >> file_name;

            in1.open(file_name);
            if (cin.eof()) // exit program on crtl D
                exit(1);
            if(!in1.is_open()) {
                cout << "Couldn't find file '" << file_name << "' please enter a valid file name " << endl;
            } else file_check = true;
            
             
        }

        getline(in1, line);
        while (!in1.eof()) {

            lines++;

            chars += line.length() + 1; // + 1 for new-line

            istringstream line_string(line);
            while (line_string >> word)
                words++;

            getline(in1, line);
        }

        cout << lines << ' ' << words << ' ' << chars << endl;
        in1.close();
        
        bool check_file = false;

        cout << "Enter another file? (y/n)" << endl;
        cin >> check_another_file;

        while (!check_file) {
            if (cin.eof())
                exit(2);
            if (check_another_file == "n"){
                loop_check = true;
                check_file = true;
            } else if (check_another_file == "y")
                check_file = true;
            else {
                cout << "please enter y or n" << endl;
                cin >> check_another_file;
            }
        }
    }
}



