#include <iostream>
using namespace std;
class item
{
public:
    item(){}
    void do_something() const noexcept
    {
        cout << "doing something from class " << endl;
        try
        {
            throw 1;
        }
        catch (int ex)
        {
            cout << "Handling exception: in item::do_something in class " << endl;
        }
    }
    private:
    int m_member_var;
};
void some_function() noexcept
{
    try
    {
        throw 1;
    }
    catch (int ex)
    {
        cout << "Handling int exception in free function some_function() " << endl;
        throw;
    }
}
int main()
{
    // exception can't propagate out of a noexcept function by any means,if you do so program will terminate you can also see that the compiler gives you a warning about it
    // try
    // {
    //     some_function();
    // }
    // catch (int ex)
    // {
        // cout << "catching rethrown exception " << endl;
    // }
    item i1;
    try{
        i1.do_something();
    }catch(int ex){
        cout<<"main() :  catching exception  throw from method"<<endl;
    }
    return 0;
}