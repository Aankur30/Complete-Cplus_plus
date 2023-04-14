#include <iostream>
using namespace std;
class outer
{
    int m_var1;
    double m_var2;
    inline static int static_int{16};

public:
    outer(int var1, double var2) : m_var1{var1}, m_var2{var2}
    {
        cout << "this is constructed of the outer class" << endl;
    }
    outer()
    {
        cout << "this is constructed of the outer class" << endl;
    }
    ~outer()
    {
        cout << "this is destructed of the outer class" << endl;
    }
    void do_something()
    {
        inner i3{23.3};
        // i3.inner_var1;Outer doesn't have access to the private section of the inner class
        cout << "this is do_something of the outer class" << endl;
        cout << "Created inner object with value " << i3.get_double() << endl;
    }
    class inner
    {
        double inner_var1;

    public:
        double get_double() const
        {
            cout << "the value of the static outer variable : " << static_int << endl;//can access the static member  of the outer class
            return inner_var1;
        }
        inner(double var1) : inner_var1{var1}
        {
            cout << "this is the constructor of the inner class" << endl;
        }
    };
};
/*
Some facts about the nested classes
1. When inner is private its objects can't be created from the outside, like in main
2. Outer doesn't have access to the private section of the inner class
3. Inner has access to private section of the outer class
4. Inner can directly access static members of the outer class,but cannot access member variables without going through the object
*/
int main()
{
    // inner i1{5.6};this will not work
    outer::inner i2{3.4}; // this will not work if it is in the private but works in public
    i2.get_double();
    cout << "----------------Seperator----------------" << endl;
    outer o1; // first the outer class constructor will be called then the inner call constructor will be called then the desctructor will be called of the outer class
    o1.do_something();
    return 0;
}