#include <iostream>
using namespace std;
int main()
{

    char *p{nullptr};

    double b = 0;
    double *q = &b;

    // other type of initilization of pointer
    int variable{23};
    int *var{&variable}; // address of operator is used

    int *p_number{}; // initilaized with null pointer
    // explicitly initilaize null pointer
    int *p_double{nullptr};

    // sizes of pointer and variable
    cout << "Size of integer = " << sizeof(int) << endl;
    cout << "Size of integer pointer = " << sizeof(p) << endl;
    cout << "Size of double = " << sizeof(double) << endl;
    cout << "Size of double pointer = " << sizeof(q) << endl;

    // Dereferencing the pointer
    int *p_int2{nullptr};
    int data{56};
    p_int2 = &data;
    cout << "Value = " << *p_int2 << endl;
    return 0; // proved that all pointer share same size
    return 0;
}