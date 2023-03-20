#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str{"hello my world"};
    cout << "Size of the string is : " << str.size() << endl;
    for (size_t i{}; i < str.size(); i++)
        cout << "Character " << i << " = " << str[i] << endl; // letter by letter
    cout << "Using the range based for loop" << endl;
    for (char value : str)
        cout << " " << value;
    cout << endl;
    for (size_t i{}; i < str.size(); i++)
        cout << " " << str.at(i) << '\t';
    char front = str.front(); //
    char back = str.back();
    cout << " front : " << front << endl
         << " back : " << back << endl;
    front = 'A';
    back = 'B';
    cout << "string str after modifiation : " << str << endl;
    char &front1 = str.front();
    char &back1 = str.back();
    front1 = 'A';
    back1 = 'B';
    cout << "string str after modifiation : " << str << endl; // changes take place
    string str2{"the pheonix king"};
    const char *str3 = str2.c_str();
    cout << "String is : " << str3 << endl; // return const char
    char *data = str2.data();
    data[0] = 'B';
    cout << "After the modificcation : " << data << endl; // modification takes place to original string
    cout << "After the modificcation : " << str2 << endl;

    return 0;
}