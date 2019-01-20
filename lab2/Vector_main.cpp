/*
Andrew Sanchez
Filename: Vector_main.cpp
Date:4/10/17
Description: appends two different vectors into one, mergers two vectors to alternate into one
merges two vectors into one from least to greatest.
percentage done: 100%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> append(vector<int> a, vector<int> b)
{
    vector<int> c;
    int i;

    for (i = 0; i < a.size(); i++){
        c.push_back(a[i]);
    }

    for (i = 0; i < b.size(); i++){
        c.push_back(b[i]);
    }

    return c;
}

vector<int> merge(vector<int> a, vector<int> b)
{
    int i;
    vector<int> c;
    if (a.size() > b.size()){
        for (i = 0; i < b.size(); i++){
            c.push_back(a[i]);
            c.push_back(b[i]);
        } while (i < a.size()){
            c.push_back(a[i]);
            i++;
        }
    } else if (b.size() > a.size()){
        for (i = 0; i < a.size(); i++){
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
        while (i < b.size()){
            c.push_back(b[i]);
            i++;
        }
    } else if (a.size() == b.size()){
        for (i = 0; i < a.size(); i++){
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
    }
    return c;
}

vector<int> merge_sorted(vector<int> a, vector<int> b)
{

    vector<int> c;
    int i = 0;
    int j = 0;

    if (a.size() > b.size()){
        while (j < b.size()){
            while (a[i] <= b[j] and i < a.size()){
                c.push_back(a[i]);
                i++;
            }
            c.push_back(b[j]);
            j++;
        }
        while (i < a.size()){
            c.push_back(a[i]);
            i++;
        }
    } else  if (b.size() > a.size()){
        while (j < a.size()){
            while (b[i] <= a[j] and i < b.size()){
                c.push_back(b[i]);
                i++;
            }
            c.push_back(a[j]);
            j++;
        }
        while (i < b.size()){
            c.push_back(b[i]);
            i++;
        }
    } else if (b.size() == a.size()){
        while (j < a.size()){
            while (b[i] <= a[j] and i < b.size()){
                c.push_back(b[i]);
                i++;
            }
            c.push_back(a[j]);
            j++;
        }
        while (i < b.size()){
            c.push_back(b[i]);
            i++;
        }
    }
    return c;
}



int main()
{
    vector<int> a;
    vector<int> b;
    int numbera;
    int numberb;

    cout << "enter numbers for vector a, enter -1 to end" << endl;
    cin >> numbera;

    while(numbera != -1){
        a.push_back(numbera);
        cin >> numbera;
    }

    cout << "enter numbers for vector b, enter -1 to end" << endl;
    cin >> numberb;

    while(numberb != -1){
        b.push_back(numberb);
        cin >> numberb;
    }

    vector<int> new_vector = append(a,b);

    cout << "vector appended: ";

    for (int i = 0; i < new_vector.size(); i++){
        cout << new_vector[i] << " ";
    }
    cout << endl;

    vector<int> alternate_vector = merge(a,b);

    cout << "vector merged: ";

    for (int i = 0; i < alternate_vector.size(); i++){
        cout << alternate_vector[i] << " ";
    }
    cout << endl;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> sorted = merge_sorted(a,b);

    cout << "vector merged and sorted: ";

    for (int i = 0; i < sorted.size(); i++){
        cout << sorted[i] << " ";
    }

    cout << endl;
}
