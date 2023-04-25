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
    friend point &operator+=(point &left, const point &right);
    friend point &operator+(point &left, const point &right);
    void print_info() const
    {
        cout << " Point [x: " << x << " y: " << y << " ]" << endl;
    }

    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
};
inline point &operator+=(point &left, const point &right)
{
    left.x += right.x;
    left.y += right.y;
    return left;
}
inline point &operator+(point &left, const point &right)
{
    point p(left); // left is itself a seperate point
    return p += right;
}

int main()
{
    point p1(20, 30);
    point p2(20, 30);
    p1.print_info();
    p2.print_info();
    p1 += p2;
    p1.print_info(); // compound operator is implemented
    p2.print_info();

    point p3(23, 23);
    p3 = p1 + p2;
    p3.print_info();

    return 0;
}