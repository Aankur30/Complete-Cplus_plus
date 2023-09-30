#include <iostream>

using namespace std;

int addNumbers(int first_param, int second_param) // this is a function used to add two numbers
{
    int result = first_param + second_param;
    return result; // function is returning a result at a time function can return only one value in c++
}

int main()
{

    int first_number{13}; // Statement
    int second_number{7};

    cout << "First number : " << first_number << endl;   // 13
    cout << "Second number : " << second_number << endl; // 7

    int sum = first_number + second_number;
    cout << "Sum : " << sum << endl; // 20

    sum = addNumbers(25, 7);         // calling addNumbers function
    cout << "Sum : " << sum << endl; // 32  //taking return value of the function in the sum variable

    sum = addNumbers(30, 54);
    cout << "Sum : " << sum << endl;

    cout << "Sum : " << addNumbers(3, 42) << endl;

    return 0;
}