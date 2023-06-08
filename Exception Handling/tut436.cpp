#include <iostream>
using namespace std;

// Declaration
void f1();
void f2();
void f3();
void exception_thrower()
{
    cout << "Starting exception thrower..." << endl;
    try
    {
        throw 0;
    }
    catch (int ex)//this is the best case scenario for the code
    {
        cout << "something went wrong " << ex << endl;
    }
    cout << "Ending exception thrower..." << endl;
}

int main()
{
    // f1();
    try
    {
        f1();
    }
    catch (int ex)
    {
        cout << "handling exception in the main function" << endl;
    }
    cout << "end of the code" << endl;

    return 0;
}
/*
// regular flow
void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "ending f1()" << endl;
}
void f2()
{
    cout << "Starting f2()" << endl;
    f3();
    cout << "ending f2()" << endl;
}
void f3()
{
    cout << "Starting f3()" << endl;
    cout << "ending f3()" << endl;
}
*/
// Exception thrown from f3() scope:Not handled anywhere
/*
void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "ending f1()" << endl;
}
void f2()
{
    cout << "Starting f2()" << endl;
    f3();
    cout << "ending f2()" << endl;
}
void f3()
{
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "ending f3()" << endl;
}
*/
/*
// Exception thrown from f3() scope:handled in f3() only
void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "ending f1()" << endl;
}
void f2()
{
    cout << "Starting f2()" << endl;
    f3();
    cout << "ending f2()" << endl;
}
void f3()
{
    cout << "Starting f3()" << endl;
    try
    {
        exception_thrower();
    }
    catch (int ex)
    {
        cout << "handling the exception on f3() " << endl;
    }
    cout << "ending f3()" << endl;
}*/

/*
// Exception thrown from f3() scope :handled in f2()

void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "ending f1()" << endl;
}
void f2()
{
    cout << "Starting f2()" << endl;
    try
    {
        f3();
    }
    catch (int ex)
    {
        cout << "handling the exception in f2()" << endl;
    }
    cout << "ending f2()" << endl;
}
void f3()
{
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "ending f3()" << endl;
}
*/
// Exception thrown from f3() scope :handled in f1()
void f1()
{
    cout << "Starting f1()" << endl;
    f2();
    cout << "ending f1()" << endl;
}
void f2()
{
    cout << "Starting f2()" << endl;
    f3();
    cout << "ending f2()" << endl;
}
void f3()
{
    cout << "Starting f3()" << endl;
    exception_thrower();
    cout << "ending f3()" << endl;
}