#include <iostream>
using namespace std;
class base
{
public:
    base() = default;
    ~base() {}
    virtual double add(double a = 5, double b = 5) const
    {
        cout << "base::add() called " << endl;
        return a + b + 1;
    }
};

class Derived : public base
{
public:
    Derived()
    {
        cout << "this is a derived costructor" << endl;
    }
    ~Derived()
    {
        cout << "this is a derived destructor" << endl;
    }
    virtual double add(double a = 10, double b = 10) const override
    {
        cout << "derived::add() called " << endl; // 12
        return a + b + 2;
    }
};

int main()
{
    base *base_ptr = new Derived; // but it has used the parameter from the base class
    double result = base_ptr->add();
    cout << "Result(base_ptr) = " << result << endl; // 12

    cout << "--------------------------------" << endl;

    // Base ref:used polymorphism
    Derived derive2;
    base &base_ref1 = derive2;
    result = base_ref1.add();
    cout << "Result(base_ref1) = " << result << endl;

    cout << "--------------------------------" << endl;

    // raw objects
    base base3;
    result = base3.add();
    cout << " Raw Result = " << result << endl; // 11

    cout << "--------------------------------" << endl;

    // direct objects
    Derived d2;
    result = d2.add();
    cout << "Result(direct objects): " << result << endl; // 22

    cout << "--------------------------------" << endl;

    // Raw objects:slicing :used static bindings
    base base1;
    result = base1.add();
    cout << "Result(Raw objects assignment): " << result << endl; // 11
    return 0;
}