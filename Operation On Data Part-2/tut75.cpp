#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;
int main()
{
    const int column{20};
    cout << "Compound bitwise assignment operators" << endl;
    unsigned char sandbox(0x55);
    cout << setw(column) << " sandbox : " << setw(column) << bitset<8>(sandbox) << endl;
    // compoud left shift
    cout << "shift left 2 bit position in place " << endl;
    sandbox <<= 2;
    cout << setw(column) << "sandbox  new variable " << setw(column) << bitset<8>(sandbox) << endl;
    return 0;
}