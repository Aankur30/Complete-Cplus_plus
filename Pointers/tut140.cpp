#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int *ptr{};
    if (!(ptr == nullptr))
        cout << "Ptr points to valid address" << endl;
    else
        cout << "Invalid Address" << endl;
    // ptr converted into boolean expression
    cout << "Converted into boolean" << endl;
    if (!(ptr))
        cout << "Ptr points to valid address" << endl;
    else
        cout << "Invalid Address" << endl;
    return 0;
}