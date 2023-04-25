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
    friend ostream &operator<<(ostream &os, const point &p);
    //      ostream &operator<<(ostream &os)
    // {
    //     return os << " point is [ x: " << x << ", y: " << y << " ]" << endl;//this is a member function for the operator overloading
    // }
    void print_info() const
    {
        cout << " Point [x: " << x << " y: " << y << " ]" << endl;
    }

    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
};
ostream &operator<<(ostream &os, const point &p)
{
    return os << " point is [ x: " << p.x << ", y: " << p.y << " ]";
}
int main()
{
    point p1(10, 20);
    cout << p1 << endl;
    // p1<<cout << endl;
    cout << "output by the function";
    p1.print_info();
    return 0;
}