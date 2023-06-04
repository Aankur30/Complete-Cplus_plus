#include <iostream>
#include <string>
using namespace std;

int main()
{
    // final and override are not keywords because they are identifiers still we can use it because the developers of the C++ didn't wanted the old code to be have any error because may be somewhere these two are used as the variables and class names
    int final{45};
    string override{"Hello there"};
    cout << "final" << endl
         << override << endl;
    return 0;
}