#include <iostream>
//Pass by value function
using namespace std;
int max(int a, int b); //formal arguments or parameter//function protoype or definition
int main()
{
    cout << "Comparing two numbers " << endl;
    int a, b;
    cout << "Input number 1: ";
    cin >> a;
    cout << "Input number 2: ";
    cin >> b;
    int num = max(a, b);//actual arguments
    cout << "maximum number is : " << num << endl;
    return 0;
}
int max(int a, int b)//function definition
{
    if (a > b)
        return a;
    else
        return b;
}