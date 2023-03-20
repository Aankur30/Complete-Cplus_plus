#include <iostream>
using namespace std;
int main()
{
    const size_t size{10}; // good pratice while using normal arrays not necessary while dynamic array allocation

    // different ways you can declare an array dynamically and how they are initialized
    double *ptr{new double[size]};                           // ptr array will contain garbage values
    int *ptr2{new (nothrow) int[size]{}};                    // all values intialized with 0
    double *ptr3{new (nothrow) double[size]{1, 2, 3, 4, 5}}; // Allocating memory space for an array of size double vars First 5 will be initialized and the rest will be 0;
    cout << "Programs ends well" << endl;
    if (ptr3)
    { // only work when the pointer is not null
        for (size_t i{}; i < size; ++i)
            cout << "value : " << ptr3[i] << " : " << *(ptr3 + i) << endl;
    }
    delete[] ptr3;
    ptr3 = nullptr;
    delete[] ptr2;
    ptr2 = nullptr;
    delete[] ptr;
    ptr = nullptr;
    cout << "After the deletion of the ptr3" << endl;
    if (ptr3)
    { // only work when the pointer is not null
        for (size_t i{}; i < size; ++i)
            cout << "value : " << ptr3[i] << " : " << *(ptr3 + i) << endl;//this piece of code will not work
    }
    return 0;
}