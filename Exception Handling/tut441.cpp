#include <iostream>
using namespace std;
class SomethingIsWrong
{
public:
    SomethingIsWrong(string_view s) : m_message(s) {}
    virtual ~SomethingIsWrong() {}
    virtual string_view what() const
    {
        return m_message;
    }

protected:
    string_view m_message;
};
class warning : public SomethingIsWrong
{
public:
    warning(const string_view s) : SomethingIsWrong(s) {}
};
class smallerror : public SomethingIsWrong
{
public:
    smallerror(const string_view s) : SomethingIsWrong(s) {}
};
class critical_error : public SomethingIsWrong
{
public:
    critical_error(const string_view s) : SomethingIsWrong(s) {}
};
void do_something(size_t i)
{
    if (i == 2)
    {
        throw critical_error("i is 2");
    }
    if (i == 3)
    {
        throw smallerror("i is 3");
    }
    cout << "doing something at iteration " << endl;
}
int main()
{
    cout << "Object exceptions with class inheritance hierarchies" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        try
        {
            do_something(i);
        }
        catch (SomethingIsWrong &ex)
        {
            cout << typeid(ex).name() << "  Exception caught: " << ex.what() << endl;
        }
    }

    return 0;
}