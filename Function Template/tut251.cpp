#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maximum(T a, T b)
{
    return (a, b) ? a : b;
}
// template specilization
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b; // after doing this it will give the correct output
}
int main()
{

    const char *g{"wild "};
    const char *h{"world"};
    cout << "using the template specilization " << endl;
    cout << "the maximum is : " << maximum(g, h) << endl; // this will result the greater pointer not the value which is greater
    cout << "the program compiled successfully " << endl;
    return 0;
}