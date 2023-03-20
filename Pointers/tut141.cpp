#include <iostream>
using namespace std;
int main()
{
    int *ptr{new int{55}};

    // Pointer in the local scope
    {
        cout << "Hello World" << endl;
    }
    {
        int *ptr{new int{55}};
    }

    // Reassignment of Stack address to active dynamic address of pointers
    cout << "The value of the ptr is : " << *ptr << endl; // this will give an error as the ptr is defined in the particular scope only

    cout << "Value of the ptr is : " << *ptr << endl;
    int number{69};
    ptr = &number;
    cout << "After rerefrencing the value of the ptr is : " << *ptr << endl;

    // Double allocation
    int *p_number{new int{55}};
    cout << "---------*p_number---------" << *p_number << endl;
    cout << "-------------After Double Allocation-------------" << endl;
    p_number = {new int{45}};
    cout << "---------*p_number---------" << *p_number << endl;
    delete ptr;
    ptr = nullptr;
    delete p_number;
    p_number = nullptr;

    return 0;
}