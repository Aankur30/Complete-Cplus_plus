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
    if (i == 0)
        throw 1;
    if (i == 2)
        throw "const char*-Hello there";
    if (i == 3)
        throw critical_error("i is 3");
    if (i == 4)
        throw string("string-Hello there");
}
int main()
{
    try
    {
        for (size_t i = 0; i < 5; i++)
        {
            try
            {
                do_something(i);
            }
            catch (int ex)
            {
                cout << "int handler-caught an integer error" << endl;
            }
            catch (...)
            {
                cout << "Inner...handler,caught some exception " << endl;
            }
        }
    }
    catch (const string &ex)
    {
        cout << "Cought some string exception " << endl;
    }
    catch (...)
    {
        cout << "Outer...handler,caught some  other exception " << endl;
    }
    return 0;
}