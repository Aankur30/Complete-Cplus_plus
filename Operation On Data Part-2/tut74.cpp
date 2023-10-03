#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;
int main()
{
    const int column{20};
    unsigned char value1{0x3};
    unsigned char value2{0x5};
    cout << setw(column) << "value1 :" << setw(column) << bitset<8>(value1) << endl;
    cout << setw(column) << "value2 :" << setw(column) << bitset<8>(value2) << endl;
    // And
    cout << " Bitwise AND " << endl;
    cout << setw(column) << " value1 & value2 : " << setw(column) << bitset<8>(value1 & value2) << endl;
    cout << " Bitwise OR " << endl;
    cout << setw(column) << " value1 | value2 : " << setw(column) << bitset<8>(value1 | value2) << endl;
    cout << " Bitwise XOR " << endl;
    cout << setw(column) << " value1 ^ value2 : " << setw(column) << bitset<8>(value1 ^ value2) << endl;
    return 0;
}