#include <iostream>
using namespace std;
int main()
{
    double var{23.33};
    auto x = var;
    cout << "sizeof(var) : " << sizeof(var) << endl;
    cout << "sizeof(x) : " << sizeof(x) << endl;
    cout << "&var : " << &var << endl;
    cout << "&x  :" << &x << endl;

    // naked auto refrence deduction

    double &var_ref{var};
    auto y = var_ref; // it will make a copy not a reference
    ++y;
    cout << "sizeof var : " << sizeof(var) << endl;
    cout << "size of var_ref : " << sizeof(var_ref) << endl;
    cout << "sizeof y : " << sizeof(y) << endl;
    cout << "&var : " << &var << endl;
    cout << "&var_ref : " << &var_ref << endl;
    cout << "&y : " << &y << endl;
    cout << "var : " << var << endl;
    cout << "var_ref : " << var_ref << endl;
    cout << "y : " << y << endl;

    // proper reference deduction

    auto &z = var_ref; // it will make a copy not a reference
    ++z;
    cout << "sizeof var : " << sizeof(var) << endl;
    cout << "size of var_ref : " << sizeof(var_ref) << endl;
    cout << "sizeof z : " << sizeof(z) << endl;
    cout << "&var : " << &var << endl;
    cout << "&var_ref : " << &var_ref << endl;
    cout << "&z : " << &z << endl;
    cout << "var : " << var << endl;
    cout << "var_ref : " << var_ref << endl;
    cout << "z : " << z << endl;
    return 0;
}