#include <iostream>

using namespace std;
class DynamicBase
{
public:
    virtual void Do_something()
    {
        cout << "DynamicBase::Do_something() called" << endl;
    }
    virtual ~DynamicBase() = default;
};
class DynamicDerived : public DynamicBase
{
public:
    virtual void Do_something() override
    {
        cout << "DynamicBase::Do_something() called" << endl;
    }
    virtual ~DynamicDerived() = default;
};
// non polymorphic types
class staticBase
{
public:
    void Do_something()
    {
        cout << "StaticBase::Do_something() called" << endl;
    }
};
class staticDerived : public staticBase
{
public:
    void Do_something()
    {
        cout << "staticDerived::Do_something() called" << endl;
    }
};
int main()
{
    cout << "fundamental types" << endl;
    cout << "type of int :" << typeid(int).name() << endl;
    if (typeid(22) == typeid(int))
        cout << "22 is an int " << endl;
    else
        cout << "22 is not an int " << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "Polymorphic refrences " << endl;
    DynamicDerived dynamic_derived;
    DynamicBase &base_ref = dynamic_derived;
    cout << "Types of dynamic derived " << typeid(dynamic_derived).name() << endl;
    cout << "types of base_ref " << typeid(base_ref).name() << endl;

    cout << "-------------------------------------------------" << endl;

    cout << "Polymorphic Pointers " << endl;
    DynamicBase *b_ptr = new DynamicDerived;
    cout << "types of b_ptr " << typeid(b_ptr).name() << endl;

    cout << "-------------------------------------------------" << endl;

    // ATTENTION:
    //           For pointers you have to dereference to see the dynamic type

    cout << "Types of b_ptr " << typeid(*b_ptr).name() << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "Non Polymorphic pointers and refs " << endl;
    staticBase *b_ptr_s = new staticDerived;
    staticDerived staticderived;
    staticBase &static_base_ref{staticderived};
    cout << "Types of *b__ptr_s: " << typeid(*b_ptr_s).name() << endl;
    cout << "Type of static_base_ref: " << typeid(static_base_ref).name() << endl;
    delete b_ptr;
    delete b_ptr_s;
    cout << "----------------DONE!!!------------------------" << endl;

    return 0;
}