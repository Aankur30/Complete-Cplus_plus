#include <iostream>
using namespace std;

int main()
{

    int number1{2};
    int number2{7};

    int result = number1 + number2;
    cout << "result " << result << endl;

    // Substraction
    result = number1 - number2;
    cout << "result " << result << endl;

    // Multiplication
    result = number1 * number2;
    cout << "result " << result << endl;

    // Division
    result = number1 / number2;
    cout << "result " << result << endl;

    // Modulus
    result = number1 % number2; // n1%n2
    cout << "result " << result << endl;//2

    result = number2 % number1; // n2%n1
    cout << "result " << result << endl;//1

    return 0;
}