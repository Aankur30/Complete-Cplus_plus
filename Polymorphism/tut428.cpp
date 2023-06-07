#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base consructor" << endl;
        this->setup();
    }
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
    virtual void setup()
    {
        cout << "Base::setup() called" << endl;
        m_value = 10;
    }
    virtual void cleanup()
    {
        cout << "Base::cleanup() called" << endl;
    }
    int getValue()
    {
        return m_value;
    }

protected:
    int m_value;
};
class Derived : public Base
{
public:
    Derived() : Base()
    {
        cout << "Derived constructor" << endl;
    }
    virtual ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
    virtual void setup() override
    {
        cout << "Derived::setup() called" << endl;
        m_value = 100;
    }
    virtual void cleanup() override
    {
        cout << "Derived::cleanup() called" << endl;
    }
};
int main()
{
    Base *p_base = new Derived;
    auto value = p_base->getValue();
    cout << "the value is " << value << endl;
    delete p_base;
    return 0;
}