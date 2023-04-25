#include <iostream>
#include <cmath>
#include<cassert>
using namespace std;
class point
{
    double x{};
    double y{};
    double length() const
    {
        return sqrt(pow(x - 0, 2) + pow(y - 0, 2) * 1.0);
    }

public:
    point() = default;
    point(double x_para, double y_para) : x{x_para}, y{y_para}
    {
        cout << "this is a point constructor  for " << this << endl;
    }
    void print_info() const
    {
        cout << " Point [x: " << x << " y: " << y << " ]" << endl;
    }
    double operator[](size_t index) const
    {
       assert((index==0)||(index==1));
        return (index == 0) ? x : y; 
    }
    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
};
int main()
{
    point p1(20, 10);
    cout << "x : " << p1[0] << endl;
    cout << "y : " << p1[1] << endl;
    p1.print_info();
    return 0;
}