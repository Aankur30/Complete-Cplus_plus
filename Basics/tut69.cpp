#include <iostream>
using namespace std;
int main()
{
    double A{34.6}, b{3.99};
    int a,c;
    a = A + b;
    c=(int)(A);
//this works but not safe
    cout<<"Old C style typecast = "<<c<<endl;
    // both have difference in results
    cout << "the implicit type casted  value is = " << a << endl;
    a = static_cast<int>(A) + static_cast<int>(b);
    cout << "the explicit conversion of a is =  " << a << endl;
    return 0;
}