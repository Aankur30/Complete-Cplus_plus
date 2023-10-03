#include <iostream>

using namespace std;

int main()
{

    int value{5};
    value = value + 1;
    cout << "The value is " << value << endl;

    value = 5; // Reset value is 5

    // Decrement by 1
    value = value - 1;
    cout << "The value is " << value << endl;

    cout << endl;

    cout << "Postfix increment and decrement " << endl;
    value = 5; // Reset value is 5

    cout << "The valus is decrementing  " << value-- << endl; // this will not decrement instantly as it will happend in the next line
    cout << "The value is " << value << endl;                 // postfix works on initaliz and then change the value

    cout << endl;

    cout << "Prefix increment and decrement " << endl;

    value = 5; // resets value is 5

    ++value;
    cout << "The value is " << value << endl; // prefix works on change then intialize

    value = 5; // resets value is 5
    --value;
    cout << "The value is " << value << endl;

    // resets value is 5
    value = 5;
    cout << "the value is " << --value << endl;
}