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
    if(i == 4){
        throw warning("i is 4"); 
    }
    cout << "doing something at iteration " << endl;
}
int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        try
        {
            try
            {
                do_something(i);
            }
            catch (SomethingIsWrong &ex_inner)
            {
                if (typeid(ex_inner) == typeid(warning))//those are warning should  be treated as warning and taken care by the inner try block
                {
                    cout << typeid(ex_inner).name() << " -Inner catch block, Exception caught : " << ex_inner.what() << endl;
                }
                else
                {
                    throw;
                }
            }
        }
        catch (SomethingIsWrong &ex_outer)
        {
            cout << typeid(ex_outer).name() << " -Outer catch block , Exception caught : " << ex_outer.what() << endl;
        }
    }
    return 0;
}