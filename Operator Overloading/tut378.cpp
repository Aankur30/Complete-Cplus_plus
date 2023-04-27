#include <iostream>
#include <cmath>
using namespace std;
class print
{
public:
    void operator()(string name)
    {
        cout << "the name is " << name << endl;
    }
    string operator()(string last_name, string first_name)
    {
        return first_name + " " + last_name;
    }
};
void do_something(print &p1)
{
    p1("printer");
}
int main()
{
    print p1;
    cout << "The use of the function call operator()" << endl;
    p1("Naruto Uzumaki");
    cout << "the full name is:" << p1("Madara", "Uchiha") << endl;
    return 0;
}