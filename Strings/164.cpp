#include <iostream>
#include <string>
using namespace std;
int main()
{
    int f1{34};
    string str1 = to_string(f1);
    cout << " str1 : " << str1 << endl;
    cout << " size of f1 : " << sizeof(f1) << endl;
    cout << "size of str1 : " << sizeof(str1) << endl;
    cout << "-------------Converting string to number----------" << endl;
    string str2{"3444"};
    int in1 = stoi(str2);
    cout << " str1 : " << in1 << endl;
    cout << " size of f1 : " << sizeof(str2) << endl;
    cout << "size of str1\" :"<< sizeof(in1) << endl;

    return 0;
}