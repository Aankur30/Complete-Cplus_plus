#include <iostream>
using namespace std;
template <typename T>
const T &maximum(const T &a, const T &b);
int main()
{
    double a{23.5};
    double b{51.2};
    cout << "the address of a is : " << &a << endl;
    double max1 = maximum(a, b);
    return 0;
}
template <typename T>
const T &maximum(const T &a, const T &b)
{
    cout << "the address of the a in the function is: " << &a << endl; // both will have the same address as it is refernced
    return (a > b) ? a : b;
}
/*
template <typename T>
const T &maximum(const T &a, const T &b);
template <typename T> T maximum(T a, T b);
double max1=maximum(a,b);// compiler will be confused that it is by value or by reference

*/
