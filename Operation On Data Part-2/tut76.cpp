#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;
int main()
{
    const int column{20};
    const unsigned mask_bit_0{0b00000001};
    const unsigned mask_bit_1{0b00000010};
    const unsigned mask_bit_2{0b00000100};
    const unsigned mask_bit_3{0b00001000};
    const unsigned mask_bit_4{0b00010000};
    const unsigned mask_bit_5{0b00100000};
    const unsigned mask_bit_6{0b01000000};
    const unsigned mask_bit_7{0b10000000};

    unsigned char var{00000000};
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;
    // setting bits with mask of the bit
    cout << " setting bit in position 1" << endl;
    var |= (mask_bit_1);
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;
    // set bit 5
    cout << " setting bit in position 5" << endl;
    var |= (mask_bit_5);
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;
    // reseting bit at position 1
    cout << "reseting bit at position 1" << endl;
    var &= (~mask_bit_1);
    cout << setw(column) << " var" << setw(column) << bitset<8>(var) << endl;
    // set all bits
    cout << "setting all the bits" << endl;
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;
    // reset at pos 0 ,2,4,6
    cout << "Reset bit at pos 0,2,4,6" << endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;
    // checking state of a bit
    cout << " checking the state of each bit position (on\\off)" << endl;
    cout << " bit0 is" << ((var & mask_bit_0) >> 0) << endl;
    cout << " bit1 is" << ((var & mask_bit_1) >> 1) << endl;
    cout << " bit2 is" << ((var & mask_bit_2) >> 2) << endl;
    cout << " bit3 is" << ((var & mask_bit_3) >> 3) << endl;
    cout << " bit4 is" << ((var & mask_bit_4) >> 4) << endl;
    cout << " bit5 is" << ((var & mask_bit_5) >> 5) << endl;
    cout << " bit6 is" << ((var & mask_bit_6) >> 6) << endl;
    cout << " bit6 " << static_cast<bool>(var & mask_bit_6) << endl;
    cout << " bit6 is" << ((var & mask_bit_7) >> 7) << endl;
    cout << " bit7 " << static_cast<bool>(var & mask_bit_7) << endl;
    // toggle bits
    // toggle bit 0
    cout << " toggle bit 0 " << endl;
    var ^= mask_bit_0;
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;
    // toggle bit 7
    cout << " toggle bit 7 " << endl;
    var ^= mask_bit_7;
    cout << setw(column) << " var " << setw(column) << bitset<8>(var) << endl;

    return 0;
}