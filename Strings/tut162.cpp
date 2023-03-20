#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1{"DATABCD"};
    string str2{"hello world!!!"};
    string str2{"BEllo"};

    str1.replace(0, 5, str2); // 5 is no of words to replace
    cout << "after replacing the str1 will be : " << str1 << endl;

    char txt[15];
    cout << "data in txt : " << txt << endl; // garbage data
    str1.copy(txt, 5, 2);
    cout << "data in txt : " << txt << endl;
    cout << "str1.size() : " << str1.size() << endl;
    cout << "str1.capacity() : " << str1.capacity() << endl;

    cout << "----------------RESIZING TO HIGHER VALUE---------------------" << endl;
    str1.resize(100);
    cout << " Display str1 : " << str1 << endl;
    cout << "str1.size() : " << str1.size() << endl;
    cout << "str1.capacity() : " << str1.capacity() << endl;

    str1.resize(5);
    cout << "----------------RESIZING TO LOWER VALUE---------------------" << endl;
    cout << " Display str1 : " << str1 << endl;
    cout << "str1.size() : " << str1.size() << endl;
    cout << "str1.capacity() : " << str1.capacity() << endl;

    cout << "----------------RESIZING TO HIGHER VALUE---------------------" << endl;
    str1.resize(100);
    cout << " Display str1 : " << str1 << endl;
    cout << "str1.size() : " << str1.size() << endl;
    cout << "str1.capacity() : " << str1.capacity() << endl;

    cout << " Display str1 : " << str1 << endl;
    cout << "str1.size() : " << str1.size() << endl;
    cout << "str1.capacity() : " << str1.capacity() << endl;

    cout << " Display str2 : " << str2 << endl;
    cout << "str2.size() : " << str2.size() << endl;
    cout << "str2.capacity() : " << str2.capacity() << endl;

    str1.swap(str2);
    cout << " Display str1 : " << str1 << endl;
    cout << "str1.size() : " << str1.size() << endl;
    cout << "str1.capacity() : " << str1.capacity() << endl;
    
    cout << " Display str2 : " << str2 << endl;
    cout << "str2.size() : " << str2.size() << endl;
    cout << "str2.capacity() : " << str2.capacity() << endl;

    return 0;
}