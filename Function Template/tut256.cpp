#include <iostream>
using namespace std;

template <typename T, typename P>
auto max(T a, P b) -> decltype((a > b) ? a : b);
int main()
{
    int a{23};
    double b{43.3};
    cout << "the size is : " << sizeof(decltype((a > b) ? a : b)) << endl; // longest type will be deduced as return type
    decltype((a > b) ? a : b) c{34};                                       // hence c will be of double type
    cout << "the size of the c is : " << sizeof(c) << endl;
    auto result = max(a, b);
    cout << "using decltype as a trailing return type : " << result << endl;

    return 0;
}
template <typename T, typename P>
auto max(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}