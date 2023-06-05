#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    unsigned short int data{0xff0u};
    cout << "the value of this hex value in binary = " << bitset<16>(data) << endl
         << "the decimal value is = " << dec << data << endl;

    // shifting to the right
    data = static_cast<unsigned short int>(data >> 1);

    // after shifting change in the value is
    cout << "value when shifted to right = " << data << endl;
    cout << "the value of this hex value in binary = " << bitset<16>(data) << endl;
    cout << "the decimal value is = " << dec << data << endl;

    // shifting to the left
    data = static_cast<unsigned short int>(data << 2);
    // after shifting change in the value is

    cout << "after shifting is = " << data << endl;
    cout << "the value of this hex value in binary = " << bitset<16>(data) << endl;
    cout << "the decimal value is = " << dec << data << endl;
    return 0;
}
