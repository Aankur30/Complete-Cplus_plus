#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string string0{"Hello!!"};
    // string string1{string0};
    // string string2{string0};

    // cout << "address of string0 : " << &string0 << endl;
    // cout << "address of string1 : " << &string1 << endl;
    // cout << "address of string2 : " << &string2 << endl;
    // // address will be different even though the data inside it is same
    // string_view sv{"Hello!!!"};
    // string_view sv1{sv};
    // string_view sv2{sv1};

    // cout << "sizeof(string_view) : " << sizeof(string_view) << endl;

    // cout << " sv : " << sv << endl;
    // cout << " sv1 : " << sv1 << endl;
    // cout << " sv2 : " << sv2 << endl;

    // cout << "------------------ADDRESSES-------------------" << endl;
    // cout << " addresses of  sv : " << &sv << endl;
    // cout << "  addresses of sv1 : " << &sv1 << endl;
    // cout << "  addresses of sv2 : " << &sv2 << endl;

    cout << "---Changing how much we can view---" << endl;

    string s{"the animals have left the region"};
    string_view sv{s};

    cout << " sv : " << sv << endl;

    sv.remove_prefix(4);
    cout << " sv : " << sv << endl;

    sv.remove_suffix(6);
    cout << " sv : " << sv << endl;
    cout << " s : " << s << endl;

    return 0;
}