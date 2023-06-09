#include <iostream>
#include <string_view>
using namespace std;
class SomethingIsWrong
{
    string m_message;

public:
    SomethingIsWrong(string_view s) : m_message(s) {}
    ~SomethingIsWrong()
    {
        cout << "SomethingIsWrong Destructor called" << endl;
    }
    SomethingIsWrong(const SomethingIsWrong &source) // if we pass by value it will make another copy so to avoid this we use reference
    {
    }
    string_view what() const
    {
        return m_message;
    }
};
void do_something(size_t i)
{
    if (i == 2)
    {
        throw SomethingIsWrong("i is 2");//passed as parameter to the catch block in the main function
    }
    cout << "Doing something at Iteration " << i << endl;
}
int main()
{
    for (size_t i = 0; i < 5; i++)
    {
        try
        {
            do_something(i);
        }
        catch (SomethingIsWrong &ex)
        {
            cout << "Exception caught " << ex.what() << endl;
        }
    }

    return 0;
}