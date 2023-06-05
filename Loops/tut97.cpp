#include <iostream>
using namespace std;
int main()
{
    cout << "the size is : " << sizeof(size_t) << endl;
    for (size_t i{0}; i < 10; i++)
        cout << "Hello world This is C++" << endl;
    return 0;
}