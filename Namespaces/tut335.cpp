#include <iostream>
using namespace std;
namespace hello
{
    unsigned int age{34};
    namespace world
    {
        int local_id{10};
        void say_something()
        {
            cout << "Hello world!" << endl;
            cout << "the age is " << age << endl;
        }
    }
    void do_something()
    {
        cout << "the value of the local_id is " << world::local_id << endl;
    }
}
int main()
{
    hello::do_something();
    hello::world::say_something(); // the nested namespace
    return 0;
}