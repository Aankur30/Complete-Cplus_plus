#include <iostream>
#include <cmath>
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
    point operator+(const point &p) const
    {
        return point(x + p.x, y + p.y);
    }
    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
};
int main()
{

    point p1(10, 10);
    point p2(20, 20);
    point p3(p1 + p2);
    p3.print_info();
    point p4{p2 + point(5, 5)};
    p4.print_info();
    (point(20, 20) + point(10, 10)).print_info();
    return 0;
}