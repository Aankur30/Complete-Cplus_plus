#include <iostream>
using namespace std;
int main()
{
    char *p{nullptr};
    char p_data{'B'};
    p = &p_data;
    cout << "Value of character " << p_data << "\t" << *p << endl;
    cout << "Address of p is = " << p << endl;
    const char *p_message{"hello world!"}; // may produce error so make it const char pointer
    // cout<<endl<<p_message<<endl;
    cout << *p_message;
    return 0;
}
