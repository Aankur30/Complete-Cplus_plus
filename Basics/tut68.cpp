#include <iostream>
using namespace std;
int main()
{
    double a{10.34};
    int x{23};
    int y = a; // implicit conversion of a into y
    double total_price = a * x;
    cout << "Total price = " << total_price << endl;
    cout << "The value of y = " << y << endl;
    return 0;
}