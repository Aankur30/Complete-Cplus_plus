#include <iostream>

using namespace std;

int main()
{

    int number1{20};
    int number2{20};

    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;

    cout << endl;

    cout << boolalpha;
    // paranthesis is required for comparison for better readability

    cout << " number1 < number2 " << (number1 < number2) << endl;
    cout << " number1 <= number1 " << (number2 <= number1) << endl;
    cout << endl;

    cout << "number1>number2 " << (number1 > number2) << endl;
    cout << " number1 >= number1 " << (number1 >= number2) << endl;

    cout << endl;

    cout << "number1==number2 " << (number1 == number2) << endl;
    cout << "number1!=number2 " << (number1 != number2) << endl;

    cout << endl;
    cout << "Store comparison result and use it later  " << endl;

    bool result = number1 == number2;
    cout << "number1 " << number1 << " == "
         << "number2 " << number2 << " : " << result << endl;
    return 0;
}