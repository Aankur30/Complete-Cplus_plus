#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1{"Hello"};
    string str2{"BEllo"};
    cout << "--------------SEARCHING-------------------" << endl;
    cout << " result of searching is : " << str1.find("llo") << endl;
    string search{'z'};
    cout << "On searching : " << str1.find(search) << endl; //
    cout << "string::npos : " << string::npos << endl;
    size_t i = -1;
    cout << " i : " << i << endl; // compiler error
    return 0;
}