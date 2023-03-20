#include <iostream>
using namespace std;
void say_name(const string &name)//if we remove the const we get the compiler error
{
    cout << "Your name is(ref)  : " << name << endl;
}
// void say_name(string name)
// {
//     cout<<"Your name is(non ref) : "<<name<<endl;
// }
// problem is when we call the function
double max(double a, double b)
{
    cout<<"double max is called "<<endl;
    return(a>b)?a:b;
}
const int& max(const int& a, const int& b)
{
    cout<<"int max called "<<endl;
    return(a>b)?a:b;
}
int main()
{
    string name{"John"};
    say_name(name); // more than one instance of overloaded function say_name includes the argument list even we pass string literal 
    return 0;
}