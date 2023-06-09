#include <iostream>
#include <string_view>
using namespace std;
class SomethingIsWrong
{
protected:
    string m_message;

public:
    SomethingIsWrong(string_view s) : m_message(s) {}
    ~SomethingIsWrong()
    {
        cout << "SomethingIsWrong Destructor called" << endl;
    }

    const string_view what() const
    {
        return m_message;
    }
};
class warning : public SomethingIsWrong
{
public:
    warning(const string_view s) : SomethingIsWrong(s) {}
};
class Smallerror : public SomethingIsWrong
{
public:
    Smallerror(const string_view s) : SomethingIsWrong(s) {}
};
class CriticalError : public SomethingIsWrong
{
public:
    CriticalError(const string_view s) : SomethingIsWrong(s) {}
};
void do_something(size_t i)
{
    if (i == 2)
        throw CriticalError("i is 2");
    if (i == 3)
        throw Smallerror(" i is 3");
    cout << "Doing something at interation " << i << endl;
}
int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        try
        {
            do_something(i);
        }
        catch (CriticalError &ex)
        {
            cout << "Critical error exception caught: " << ex.what() << endl;
        }
        catch (Smallerror &ex)
        {
            cout << "Small error caught: " << ex.what() << endl;
        }
        catch (warning &ex)
        {
            cout << "Warning caught: " << ex.what() << endl;
        }//should be written in the order like from the most derived classes to the most base classed to get the proper error message 
        catch (SomethingIsWrong &ex)
        {
            cout << "Something is wrong caught: " << ex.what() << endl;
        }
    }
    cout<<"finished in the main function"<<endl;

    return 0;
}