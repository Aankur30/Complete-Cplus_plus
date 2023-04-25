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
    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
    friend ostream &operator<<(ostream &os, const point &p);
};
inline ostream &operator<<(ostream &os, const point &p)
{
    return os << " point is [ x: " << p.x << ", y: " << p.y << " ]";
}
class number
{
    int num{};

public:
    number() = default;
    number(int value) : num(value)
    {
        cout << "this is number class constructor" << endl;
    }
    ~number()
    {
        cout << "this is number class destructor" << endl;
    }
    explicit operator double() const
    {
        return static_cast<double>(num);
    }
    explicit operator point() const
    {
        return point(static_cast<double>(num), static_cast<double>(num));
    }
};

void use_point(const point &p)
{
    cout << "the converted point from the number is : " << p << endl;
}
int main()
{
    number n1(23);
    cout << "the double value of the number is : " << static_cast<double>(n1) << endl;
    use_point(static_cast<point>(n1));
    return 0;
}