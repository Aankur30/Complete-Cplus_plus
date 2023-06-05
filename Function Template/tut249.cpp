#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b);
int main()
{
    int a{23}, b{34};
    double c{34.4}, d{56.66};
    string e{"Hello"}, f{"World"};
    cout << "maximum(int) : " << maximum(a, b) << endl;
    cout << "maximum(double) : " << maximum(c, d) << endl;
    cout << "maximum(string) : " << maximum(e, f) << endl;
    cout << "----Explicity declared using the template----" << endl;
    maximum<double>(c, d);
    maximum<double>(a, c);
    // maximum<double>(a,e);
    return 0;
}
template <typename T>
T maximum(T a, T b)
{
    cout << "currently type is working " << endl;
    return (a > b) ? a : b;
}
