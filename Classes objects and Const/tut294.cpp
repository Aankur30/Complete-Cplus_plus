#include <iostream>
using namespace std;
struct point
{
    double x;
    double y;
};
int main()
{
    point p1{23.3, 34.4};
    // assign x to a and y to b
    auto [a, b] = p1; // order is important only works when members are public
    cout << " a : " << a << endl;
    cout << " b : " << b << endl;
    cout << "the sizeof(a) is : " << sizeof(a) << endl; // same as of double
    // a and b are just copies
    p1.x = 34.4;
    p1.y = 34.9; // not going to change as a and b is copies
    cout << " a : " << a << endl;
    cout << " b : " << b << endl;
    // capturing  a strutured binding in a lambda function
    // this was only possible in C++ 20
    // auto f = [=]()
    // {
    //     cout << "have captured in the captured list " << a << endl;
    //     cout << "have captured in the captured list " << b << endl;

    // };
    // f(); // it will call itself auitmatically
    return 0;
}