#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1{"Hello"};
    string str2{"BEllo"};
    cout << " using the string method compare " << endl;
    cout << "On comparing :" << str1.compare(str2) << endl;
    const char *str3{"mello"};
    cout << "comparing string with c string : " << str2.compare(str3) << endl;
    string str4{"Hello there"};
    cout << "comparing part of the string : " << str4.compare(6, 5, str1) << endl;

    return 0;
}