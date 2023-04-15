#include <iostream>
using namespace std;

double add(double x, double y)
{
    return x + y;
}
namespace my_thing
{
    double add(double x, double y)
    {
        return x + y - 1;
    }
    void do_somthing()
    {
        double result = ::add(4, 5); // this is a global namespace on removing the scope resolution operator we will get the add function which is inside the namespace
        cout << "the result is " << result << endl;
    }
}
int main()
{
    my_thing::do_somthing();
    return 0;
}