#include <iostream>
using namespace std;
int max(int &a, int &b) // these two functions are different
{
    return (a > b) ? a : b;
}
int max(const int &a, const int &b) // no modification of variables take place
{
    return (a > b) ? a : b;
}
int main()
{
    int a{23};
    int b{34};
    cout << "first call " << endl;
    int max1 = max(a, b);
    cout << "the max value is :" << max1;
    cout << endl;
    cout << "Second Call " << endl;
    const int &ref_a = a;
    const int &ref_b = b;
    int max2 = max(ref_a, ref_b);
    cout << "the maximum is " << max2 << endl;
    return 0;
}