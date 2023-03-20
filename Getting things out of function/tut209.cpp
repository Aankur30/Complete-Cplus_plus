#include <iostream>
using namespace std;
int &max_sum(int &a, int &b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    cout << "Input the values " << endl;
    cout << "Input the first number : ";
    cin >> a;
    cout << "Input the second number ";
    cin >> b;
    int &ref_max = max_sum(a, b); // value in returned by reference
    int val = max_sum(a, b);      // val is not referenced
    cout << " ref_max : " << ref_max << endl;
    cout << " val : " << val << endl;
    ++ref_max;
    cout << "After calling of the function" << endl;
    cout << "a :" << a << endl;
    cout << " b: " << b << endl;
    return 0;
}