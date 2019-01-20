/*
Andrew Sanchez
Date: 5/21/17
Description: program takes values from a file, puts it into an array, sorts the array least to greatest, then searches for a value in the vector
Solution:the program uses ifstream to input values from file into a vector, then to an array. program uses swap function to sort array. Then program uses binary search by splitting the vector into halves repeatedly until it finds or doesnt find an entered value to search for in the array.
Percentage:100
*/

#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

int binary_search(int a[], int f, int t, int v) //function binary_search @param int a[], int f, t, v. binary search splits array into halves to cut down search time for a value
{
    if (f > t)
        return -1;
    int mid = (f + t) / 2;
    if (a[mid] == v)
        return mid;
    else if (a[mid] < v)
        return binary_search(a, mid + 1, t, v);
    else 
        return binary_search(a, f, mid - 1, v); 

}
 


main()
{
    ifstream file1;

    file1.open("num1");

    if (!file1.is_open()){
        cout << "Couldn't open file num1" << endl;
        exit(1);
    }
     
    vector<int> x;
    int t;
   
    file1 >> t;
    while (!file1.eof()){
        x.push_back(t);
        file1 >> t;
    }
    int from = 0;
    int to = 7;
    int value;
    
    const int n = x.size(); 
    int arr[n];

    for (int i = 0; i < n; i++)
        arr[i] = x[i];  

    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);

    for (int i = 0; i < n; i++){
        cout << arr[i];
        cout << endl;
    }
    cout << endl;

    cout << "enter a number to search: " << endl;
   
    vector<int> values;
    
    cin >> value; 
    while (!cin.eof()){
        values.push_back(value);
        cin >> value;
    }
    for (int i = 0; i < values.size(); i++){
        int position = binary_search(arr, from, to, values[i]);    
        if (position == -1)
            cout << "number " << values[i] << " not found" << endl;
        else cout << "number " << values[i] << " is in position " << position << endl;
    }
    file1.close();

}
