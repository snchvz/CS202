/*
Andrew Sanchez
Filename: palindrome.cpp
Date: 5/15/17
Description: Program checks if string is a palindrome by checking if every first and subsequent letter of a string is equal to the last and subsequent before the last letter in a string.
solution: program uses recurssion by checking the first and last letter of a string, decreasing the string by one over the first letter and one before the last letter and then checking again if they are the same until the string is cromprised of only one letter 
percentage: 100
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_letter(char c)
{
    if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'))
        return true;
    else 
        return false;
}

bool is_palindrome(string s)
{
	if (s.length() <= 1)
		return true;

	char first = s[0];
	char last = s[s.length()-1];

        if (!is_letter(last)){
            string shorter = s.substr(0, s.length()-1);
            return is_palindrome(shorter);
        }
        
        if (!is_letter(first)){
            string shorter = s.substr(1);
            return is_palindrome(shorter);
        }
    
	if (first == last or first == last+32 or last == first+32) {         
		string shorter = s.substr(1, s.length()-2);
		return is_palindrome(shorter);
	}
	return false;
}

main()
{
	cout << "Enter a string: ";
	string input;
	getline(cin, input);
	cout << "\'" << input << "\' is ";
	if (!is_palindrome(input))
		cout << "not ";
	cout << "a palindrome.\n";
}


