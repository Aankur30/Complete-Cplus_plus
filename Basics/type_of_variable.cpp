// use of auto keyword in c++
#include <iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto x{34};
    auto y{34.4};
    auto z{'e'};
    auto ptr = &x;
    // typeid(variable).name() is used to get the type of the variable
    // Outputs are
    cout << typeid(x).name() << endl;   // i
    cout << typeid(y).name() << endl;   // d
    cout << typeid(z).name() << endl;   // c
    cout << typeid(ptr).name() << endl; // Pi
    return 0;
}