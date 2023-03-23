#include <iostream>
using namespace std;

int main()
{
    int c{42};
    auto fun = [=]() // for capturing all we  use equals(=) sign inside the capture list
    {                // capture all by value
        cout << "the value of the c is " << c << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "outer value of the  c is" << c << endl;
        cout << endl;
        fun(); // the result of the fun function is not going to change as it is just a copy
        c++;
    }
    cout << "--------------------------------------------" << endl;

    auto fun1 = [&]() // capture all by reference using the (&)sign
    {
        cout << "the value of the c is " << c << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "outer value of the  c is" << c << endl;
        cout << endl;
        fun1(); // the result of the fun function is not going to change as it is just a copy
        c++;
    }
    return 0;
}