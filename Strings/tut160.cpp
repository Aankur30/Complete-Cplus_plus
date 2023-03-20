#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1{"Hello"};
    string str2{"BEllo"};
    cout << boolalpha;
    cout << " fstr1 > str2 : " << (str1 > str2) << endl;
    cout << "str1 == str2 : " << (str1 == str2) << endl;
    const char *str3{"mello"};
    cout << "str3== str1  : " << (str1 == str3) << endl;
    return 0;
}