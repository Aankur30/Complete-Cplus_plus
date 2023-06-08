#include <iostream>
using namespace std;

class item
{
public:
    item()
    {
        cout << "Item constructor called" << endl;
    }
    ~item()
    {
        cout << "Item destructor called" << endl;
    }
};
class MyException
{
public:
    MyException() = default;

    MyException(const MyException &ex) {} // copy constructor works when public
    // gives error when it is private protected or deleted
};
int main()
{
    int a{10};
    int b{10};
    try
    {
        item item1;
        if (b == 0)
            throw 0; // if the condition is is true like here b is 10 then after the throw statement directly catch block will be executed not the below statement they will be executed when if is false
        a++;
        b++;
        cout << "Code that executes when things are fine  " << endl
             << "a : " << a << endl
             << "b : " << b << endl;
    }
    catch (int ex)
    {
        cout << "Something went wrong , Exception thrown : " << ex << endl; // throw value will be stored inside the variable of the catch statement
    }
    cout << "END!!!!!" << endl;

    cout << "--------------------------------" << endl;

    int c{0};
    try
    {
        int var{55};
        int *int_ptr = &var;
        if (c == 0)
            throw int_ptr; // throw value will be stored inside the variable of the catch statement
        cout << "keep doing some other thing " << endl;
    }
    catch (int *ex)
    {
        cout << "Something went wrong Exception thrown " << *ex << endl;
    }
    cout << "End of the code" << endl;
    cout << "--------------------------------" << endl;
    /*
        throw 0;
        cout << "Doing something after we throw" << endl; // this line will not execute
        cout << "DONE!!" << endl;
        */
    // potentially memory leak the destructor for item is never called when we're thrown out of the try block and memory leaked
    int d{0};
    try
    {
        item *item_ptr = new item(); // can use smart pointers
        // memeory leak takes place so use the smart poiters instead of raw pointers
        if (d == 0)
            throw 0;
        cout << "keeping doind the same things" << endl;
    }
    catch (int ex)
    {
        cout << "Something went wrong Exception thrown " << ex << endl;
    }
    cout << "END!!!" << endl;
    try
    {
        MyException e;
        throw e;
    }
    catch (MyException ex)
    {
    }
    cout << "END!!!" << endl;
    return 0;
}