#include <iostream>
#include <string>
#include <bits/stdc++.h>

#define length 10

using namespace std;

int main()
{
    // Printing data

    cout << "Hello C++20 " << endl;

    int age{21};
    cout << "Age : " << age << endl;

    cerr << "Error message : Something is wrong" << endl;
    clog << "Log message : Something happened " << endl;

    // Data input

    int age1;
    string name;

    cout << "Please type your name and age : " << endl;

    cin >> name;
    cin >> age1;

    cin >> name >> age1;

    cout << "Hello " << name << " you are " << age1 << " years old!" << endl;

    // Data with spaces

    string full_name;
    int age3;

    cout << "Please type in your full name and age " << endl;

    cin >> age3;
    getline(cin, full_name); // takes the empty character as input because "\n" is considered a valid string

    cout << "Hello " << full_name << " you are " << age3 << " years old!" << endl;
    getline(cin, full_name); // Again taking the input 

    cout << "Hello " << full_name << " you are " << age3 << " years old!" << endl;

    return 0;
}