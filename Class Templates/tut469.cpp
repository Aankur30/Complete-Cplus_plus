#include <iostream>
using namespace std;
template <typename T>
class TemplateClass; // forward declaration to make the function declaration possible

template <typename T>
void some_func(TemplateClass<T>);
// declaration, func is a template function because it has template<typename T> in front of it, the compiler will generate an instance for it with concrete types as  template arguments when needed.

template <typename T>
class TemplateClass
{
    friend void some_func<T>(TemplateClass<T> param); // can also place here the empty pair of brackets it will work beside the some_func literal

public:
    explicit TemplateClass<T>()
    {
    } 
    void set_up(T param)
    {
        m_var = param;
    }
    void do_something(const T a, const T b)
    {
        cout << "Doing something.." << a << "\t" << b << endl;
    }

private:
    T m_var;
};
template <typename T>
void some_func(TemplateClass<T> param)
{
    cout << "Inside some_func, accessing private data of the template class = " << param.m_var << endl;
}

int main()
{
    TemplateClass<int> object1;
    object1.set_up(10);

    TemplateClass<double> object2;
    object2.set_up(20.4);

    some_func(object1);
    some_func(object2);
    return 0;
}