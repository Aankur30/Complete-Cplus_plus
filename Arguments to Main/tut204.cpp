#include <iostream>
#include <cstring> //for the strlen function used
#include <stdlib.h>
using namespace std;
// calculator
int main(int argc, char **argv)
// int main(int bird,char*dog[])//can be used any name in place
{
    if (argc != 4)
        cerr << "Program can be called with 3 arguments like :" << endl;
    cerr << "You called with : ";
    for (size_t i{}; i < argc; ++i)
    {
        cout << " " << argv[i];
    }
    cout << endl;
    // at argv[0]- there will always be the name of the program stored
    double first(atof(argv[1])); 
    double Second(atof(argv[3]));
    if (first == 0.00 || Second == 0.00)
        cout << "Please enter valid numbers" << endl;
    const char *operation(argv[2]);
    char c;
    if ((strlen(operation) == 1) && (operation[0] == '+') || (operation[0] == '-') || (operation[0] == '*') || (operation[0] == '/'))
    {
        c = operation[0];
    }
    else
    {
        cout << operation << " is not a valid operation" << endl;
    }
    switch (c)
    {
    case '+':
        cout << "first = " << first << "second = " << Second << "first + Second = " << first + Second << endl;
        break;
    case '-':
        cout << "first = " << first << "second = " << Second << "first - Second = " << first - Second << endl;
        break;
    case '*':
        cout << "first = " << first << "second = " << Second << "first * Second = " << first * Second << endl;
        break;
    case '/':
        cout << "first = " << first << "second = " << Second << "first / Second = " << first / Second << endl;
        break;
    default:
        cout << "invalid operation Can't be evaluated" << endl;
    }
    return 0;
}