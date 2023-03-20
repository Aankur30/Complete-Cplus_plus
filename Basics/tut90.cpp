#include <iostream>
using namespace std;
int main()
{
    constexpr bool condition{false};
    if constexpr (condition)
        cout << "condition is true" << endl;
    else
        cout << "condition is false" << endl;
    return 0;
}