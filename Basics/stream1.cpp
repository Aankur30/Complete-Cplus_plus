#include <iostream>
using namespace std;
int main()
{
    string fullname;
    getline(cin, fullname); // to get the string having spaces in it.
    cout << "Your full name is " << fullname << endl;
    cout << "Hello World"; // printing data to terminal
    cerr << endl
         << "Something went wrong" << endl; // error to the console
    clog << "This is a log message";        // log message to the console
    int age{21};
    cout << endl
         << "age = " << age;
    string name;
    cin >> name;
    cout << endl
         << "My name is " << name;

    return 0;
}