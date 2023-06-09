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
    catch (int ex) // this is the best case scenario for the code
    {
        cout << "something went wrong " << ex << endl;
    }
    cout << "Ending exception thrower..." << endl;
}
int main()
{
    try
    {
        f1();
    }
    catch (int ex)
    {
        cout << "handling exception in the int main()" << endl;
    }
    cout << "main() finished successfully" << endl;
    return 0;
}
void f1()
{
    cout << "Starting f1()" << endl;
    try
    {
        f2();
    }
    catch (int ex)
    {
        cout << "Exception handled in f1()" << endl;
    }
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
        cout << "Exception handled in f2()" << endl;
    }
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
        cout << "Exception handled in f3()" << endl;
    }
    cout << "ending f3()" << endl;
}