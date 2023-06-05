#include <iostream>
using namespace std;

int main()
{
    int a{34};
    int b{34};
    cout << "the use of the capture list is " << endl;
    auto func = [a, b]()
    {
        cout << "the value of the a+b is : " << a + b << endl;
    };
    func();
    cout << "-------------------" << endl;
    cout << "Capturing by value " << endl;
    int c{45};
    auto fun = [c]()
    {
        cout << "the value of the c is " << c << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "outer value of the  c is" << c << endl;
        fun(); // the result of the fun function is not going to change as it is just a copy
        c++;
    }
    cout << "----------------------------------------------------------------" << endl;
    cout << "passed by reference" << endl;
    auto fun1 = [&c]()
    {
        cout << "the value of the c is " << c << "the address is " << &c << endl; // the address of the inner and outer value will be same for all the iterations
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "outer value of the  c is " << c << "the address is " << &c << endl;
        fun1(); // the result of the fun function is not going to change as it is just a copy
        c++;
    }
    return 0;
}
