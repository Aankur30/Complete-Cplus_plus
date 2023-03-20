#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setw(10) << "  CASE 1. Uninitilalized Pointer" << endl;
    int *ptr;
    cout << " ptr : " << ptr << endl;
    cout << " *ptr : " << *ptr << endl;
    cout << "This is a CRASH!!!!!!" << endl; // crashed console output

    cout << setw(10) << "CASE 2. Delete Pointer" << endl;
    int *ptr1{new int{55}};
    cout << "*ptr1(before Deletion ) : " << *ptr1 << endl;
    delete ptr1;
    cout << "*ptr1(After Deletion) : " << *ptr1 << endl;

    cout << setw(10) << "CASE 3. Multiple pointers pointing to same address" << endl;
    int *ptr2{new int{22}};
    int *ptr3{ptr2};
    cout << "ptr2  : " << ptr2 << " *ptr : " << *ptr2 << endl;
    cout << "ptr3  : " << ptr3 << " *ptr : " << *ptr3 << endl; // gives the same value
    delete ptr2;
    cout << "(After Deleting)ptr3  : " << ptr3 << " *ptr : " << *ptr3 << endl;

    return 0;
}