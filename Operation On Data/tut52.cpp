#include <iostream>
using namespace std;

int main()
{

    int value{45};
    cout << "the value is " << value << endl;

    cout << endl;

    value = value + 5;
    cout << "the value is " << value << endl;

    value -= 5; // equivalent to value=value-5
    cout << "the value is " << value << endl;

    cout << endl;
    value *= 2;
    cout << "the value is " << value << endl;

    cout << endl;
    value /= 3;
    cout << "the value is " << value << endl;

    cout << endl;
    value %= 11;
    cout << "the value is " << value << endl;

    return 0;
}