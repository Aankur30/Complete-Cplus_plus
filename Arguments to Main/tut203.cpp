#include <iostream>
using namespace std;
// calculator
int main(int argc, char **argv)
{
    double first{12.3};
    double second{31.1};
    char c{'-'};
    switch (c)
    {
    case '+':
        cout << "first : " << first << "+"
             << "second : = " << second << first + second << endl;
        break;
    case '-':
        cout << "first : " << first << "-"
             << "second : " << second << first - second << endl;
        break;
    default:
        cout << "No operation has to be performed" << endl;
    }
    return 0;
}