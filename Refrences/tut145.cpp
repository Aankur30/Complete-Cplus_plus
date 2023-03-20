#include <iostream>
using namespace std;
int main()
{
    int value{30};
    double value2{45.45};
    int &refrence_value{value};
    int &refrence_value_value = value;
    double &refrence_value2{value2};

    cout << "value :" << value << endl;
    cout << "value2 :" << value2 << endl;
    cout << "refrence_value :" << refrence_value << endl;
    cout << "refrence_value2 :" << refrence_value2 << endl;
    cout << "&value :" << &value << endl;
    cout << "&value2 :" << &value2 << endl;
    cout << "&refrence_value :" << &refrence_value << endl;
    cout << "&refrence_value2" << &refrence_value2 << endl;
    cout << "sizeof(int)" << sizeof(int) << endl;
    cout << "sizeof(refrence_value)" << sizeof(int &) << endl;
    return 0;
}
