#include <iostream>
#include <string>
using namespace std;
int sum(int a, int b)
{
    int result = a + b;
    cout << "Result is  : " << result << endl;
    return result; // this run by value
}

// Compiker optimization to return by reference
string add_string(string str1, string str2)
{
    string result = str1 + str2;
    cout << " &result : " << &result << endl;
    return result; // this runs by reference
}

int main()
{
    int num1, num2;
    cout << "Input number 1: ";
    cin >> num1;
    cout << "Input number 2: ";
    cin >> num2;
    int total = sum(num1, num2);
    cout << "the sum of the result is  : " << total << endl;
    cout << "Program run successfully" << endl;

    // In modern compilers, return by value is commonly optimized out by the compilers when possible and the function is modified behind your back to return by reference, avoiding unnecessary copies!.
    string str_result = add_string(string("Hello "), string("World!!"));
    cout << " &str_reult is : " << &str_result;
    cout << "the result is : " << str_result;
    return 0;
}
