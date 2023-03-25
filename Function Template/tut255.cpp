#include <iostream>
using namespace std;
template <typename T, typename P>
auto maximum(T a, P b)
{
    return (a > b) ? a : b;
}
int main()
{
    auto max1 = maximum(12.3, 33); // longest return type will be deduced
    cout << "the size of the max is " << max1 << endl;
    cout << "the size of the max1 is :" << sizeof(max1) << endl;
    auto max2 = maximum('b', 33);
    cout << "the size of the max is " << max2 << endl;
    cout << "the size of the max1 is :" << sizeof(max2) << endl;
    auto max3 = maximum<char, char>('b', 90);
    cout << "the value of the max is :" << max3 << endl;
    cout << "sizeof the max3 is :" << sizeof(max3) << endl;
    cout << "the value of the b is :" << static_cast<int>(max3) << endl;

    return 0;
}