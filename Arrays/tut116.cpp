#include <iostream>
using namespace std;
int main()
{
    int a[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "number[12] = " << a[12] << endl; // upper bound
    // gives the garbage value
    a[12] = 100;
    cout << "the value is = " << a[12] << endl; // now give difinte value because we have fixed the value for a[12] not for all upper bound values
    // just never go over bound
    return 0;
}