#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1{"the lion king"};
    cout << " string is : " << str1 << endl;
    cout << "size of the string : " << str1.size() << endl;
    cout << "capacity of the string is : " << str1.capacity() << endl;
    str1.clear();
    cout << "-----------------AFTER CLEARING--------------------" << endl;
    cout << " string is : " << str1 << endl;
    cout << "size of the string : " << str1.size() << endl;
    cout << "capacity of the string is : " << str1.capacity() << endl; // capacity remains same
    string str2{"122"};
    cout << "string before insertion : " << str2 << endl;
    str2.insert(1, 1, '3'); // At index 1, 1 character  is inserted i.e. 3

    cout << "After the insertion  :" << str2 << endl;
    str2.insert(1, 2, '3'); // no of characters inserted is changed
    cout << "After the insertion  :" << str2 << endl;
    str2.insert(2, 1, '3'); // index at which insertion takes place is changed
    cout << "After the insertion  :" << str2 << endl;
    string str3{"hello there"};
    const char *text4{"world health organization"};
    cout << "Before inserting : " << str3 << endl;
    str3.insert(6, text4, 6);                                // starting at 6 position and 6 letters from the given string or character array
    cout << "After inserting the string : " << str3 << endl; // after inserting
    string str9{"Hello world used to start off things when learning programming"};
    cout << "lets erase some characters from the string" << endl;
    str9.erase(11, str9.size() - 11);
    cout << "after erasing the string :: " << str9 << endl;
    string str10{"hello world"};
    str10.push_back('!');
    cout << " after pushing : " << str10 << endl;
    str10.pop_back();
    cout << "after poping : " << str10 << endl;

    return 0;
}