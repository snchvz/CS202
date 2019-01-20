/*
Andrew Sanchez
File Name: String_main.cpp
Date: 4/17/17
Description: takes two arrays and compares/tells lenght/ concatonates/ copies/ copies number by n
Percentage Done:80% 
*/

#include <iostream>

using namespace std;

//measure lenght @param array char
unsigned int strlen(const char s[])
{
    unsigned int n;

    for (n = 0; s[n]; n++); //same as s[n] != '\o'
    
    return n;
}

//measure length using pointers @param array char
unsigned strlen2(const char * s)
{
    unsigned int n;
    
    for (n = 0; *(s+n); n++);

    return n;
}

//copy array @param char t @param char s
void strcpy(char t[], const char s[]) 
{
    for (int i = 0; t[i] = s[i]; i++);
}

//copy array @param char t @param char s using pointers
void strcpy2(char * t, const char * s)
{
    for ( ; *t++ = *s++; );
}

//copy array @param t @param char s up to variable n
void strncpy(char t[], const char s[], const unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n and s[i]; i++)
        t[i] = s[i];
    t[i] = '\0';
}

//concatonates array @param s to array @param t
void strcat(char t[], const char s[])
{
    unsigned int i;
    
    for (i = 0; t[i]; i++);
    strcpy(t+i, s);
}

//copies amount n of chracters in array @param s to array @param t using pointers
void strncpy2(char* t, char* s, const unsigned int n)
{
    unsigned int i;
    
    for (i = 0; i < n and *s; i++){
        *t++ = *s++; 
    }
    *t = '\0';
}

//concatonates array @param s to array @param t using pointers
void strcat2(char* t,const  char* s)
{
    unsigned int i;
    
    for (i = 0; *t; i++){
        *t++;
    }    
    strcpy((t+i), s);

}

//compares array @param t to array @param s
int strcmp(char* t, const char* s)
{
    int i = 0;
    while (*t != '\0' and *s != '\0'){
        if (*t > *s){
            i++;
        }  else if (*t < *s){
            i--;
        }
        *t++;
        *s++;         
    }
    return i;

}

int main()
{
    char str1[10] = "abc";
    char str2[10] = "1234";
   
    int number = strlen2(str1);

    cout << "Lenght of array: " << number;
    cout << endl;

    strcpy2(str1,str2);
    
    for (int i = 0; *(str1+i); i++){
        cout << *(str1+i) << " "; 
    }
    cout << endl; 
    
    
    strncpy2(str1, str2, 2);

    for (int i = 0; *(str1+i); i++){
        cout << *(str1+i) << " ";
    }
    
    cout << endl;
    
    strcat(str1, str2);

    for (int i = 0; *(str1+i); i++){
        cout << *(str1+i) << " ";
    }
    
    cout << endl;
    
    char strx[20] = "abcd", stry[20] = "efg";

    cout << "strx= " << strx << "stry= " << stry << endl;
    cout << "strlen(strx)= " << strlen2(strx) << " Strlen(stry)= " << strlen2(stry) << endl;
    
    strcpy2(strx, stry);
    cout << "strx= " << strx << endl;
  
    strcat(strx, stry);
    cout << "strx= " << strx << endl;

    cout << "strcmp(strx, stry)= " << strcmp(strx, stry) << endl;
    cout << "strcmp(stry, \"efg\")= " << strcmp(stry, "efg") << endl;

    strncpy(stry, "hi jkl", 2); 
    cout << "stry= " << stry << endl;

    strncpy(stry, "hi jkl", 12);
    cout << "stry= " << stry << endl;

}
