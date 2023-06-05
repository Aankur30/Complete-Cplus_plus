#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str1{"hello world!!"};
    string str2;
    string str3{};
    cout << " str1 is empty : " << boolalpha << str1.empty() << endl;
    cout << " str2 is empty : " << boolalpha << str2.empty() << endl;
    cout << " str3 is empty : " << boolalpha << str3.empty() << endl;

    cout << "---------------------------------------" << endl;
    cout << "str1 contains : " << str1.size() << " characters" << endl;
    cout << "str2 contains : " << str2.size() << " characters" << endl;
    cout << "str3 contains : " << str3.size() << " characters" << endl;
    cout << "---------------------------------------" << endl;
    cout << " str1.length() : " << str1.length() << endl;
    cout << " str2.length() : " << str2.length() << endl;
    cout << " str3.length() : " << str3.length() << endl;

    cout << "the max size is : " << str1.max_size() << endl;
    cout << "the capacity is : " << str1.capacity() << endl;
    str1 = "people say sky is the limit, but i have seen  steps on the moon";
    cout << "the capacity is : " << str1.capacity() << endl;
    str1.reserve(100);
    cout << "the capacity after reserve is : " << str1.capacity() << endl; // 126
    cout << "string is : " << str1 << endl;
    str1 = "this string is to check the string fit function";
    cout << " the new capacity is : " << str1.capacity() << endl;
    str1.shrink_to_fit();
    cout << " after applying the method over the string :" << str1.capacity() << endl;

    return 0;
} // size and length method gives the same result