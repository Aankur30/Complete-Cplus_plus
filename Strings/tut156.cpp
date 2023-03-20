#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str1{"hello"};
    string str2{" World!"};
    const char message[]{"hello"};
    char *message2{" world!!"};

    string message = str1 + " my " + str2;
    cout << "Concatenated string : " << message << endl;
    string str{string{"hello"} + " World!!!"}; // other way of conccatenation
    cout << "str: " << str << endl;
    string str3 = str1.append(str2);
    cout << "Concatenation through appending : " << str3 << endl;
    string str4{string{"Hello"}.append(" World!!")};
    cout << "Another method of concatenation : " << str4 << endl;
    string str15{str1.append(5, '?')};
    cout << "unique things : " << str15 << endl;
    string str16{"this is the paragraph for appending"};
    string str17{str1.append(str16, 5, 16)};
    cout << "partition appending : " << str17 << endl;
    cout << " string is : " << string{"hello"} + message << endl;
    cout << " string is : " << string{"hello"} + message2 << endl;
    cout << " using append function : " << string{"hello"}.append(message) << endl;
    cout << " using append function : " << string{"hello"}.append(message2) << endl;
    string str27{"Computer "};
    str27 = str27 + to_string(67);
    cout << " str : " << str27 << endl;
    cout << " hello " + to_string(12.56f) << endl;

    return 0;
}