#include <iostream>

using namespace std;

int main()
{

    char character1{'a'};
    char character2{'b'};
    char character3{'c'};
    char character4{'d'};

    cout << "character1: " << character1 << endl;
    cout << "character2: " << character2 << endl;
    cout << "character3: " << character3 << endl;
    cout << "character4: " << character4 << endl;

    // One byte in memory: 2^8=256 different values of character(0-255)
    cout << endl;

    char value = 65; // ASCII Code of A is 65
    cout << "the value is: " << value << endl;
    cout << "value(int ) = " << static_cast<int>(value) << endl;//used for typecasting

    return 0;
}