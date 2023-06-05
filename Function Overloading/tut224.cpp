#include <iostream>
using namespace std;
int max(int a, int b);
// int max(int a,int b)
// {
//     return(a>b)?a:b;
// }
int max(const int a, const int b) // redefinition of the function gives compiler error
{
    cout << "const function is called " << endl;
    return (a > b) ? a : b;
}
int main()
{
    int a = 10, b = 20;
    cout << "maximum is : " << endl;
    int maximum = max(a, b);
    cout << "the maximum is :" << maximum << endl;
    return 0;
}