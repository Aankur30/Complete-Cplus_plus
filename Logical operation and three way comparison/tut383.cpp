#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

class point
{
    double x{};
    double y{};

public:
    point() = default;
    point(double x_para, double y_para) : x{x_para}, y{y_para}
    {
    }
    double length() const
    {
        return sqrt(pow(x - 0, 2) + pow(y - 0, 2) * 1.0);
    }
    bool operator==(const point &other) const // can also be done as non member fuction wise taking two parameters by making it friend
    {
        return (this->length() == other.length());
    }
    bool operator<(const point &other) const
    {
        return (this->length() < other.length());
    }

    ~point() = default;
    friend ostream &operator<<(ostream &os, const point &p);
};
inline ostream &operator<<(ostream &os, const point &p)
{
    return os << " point is [ x: " << p.x << ", y: " << p.y << " ]";
}
int main()
{
    using namespace rel_ops;
    point p1(10, 10);
    point p2(20, 20);
    cout << "the value of p1 :" << p1 << endl;
    cout << "the length of point p1 is = " << p1.length() << endl;
    cout << "the length of point p2 is = " << p2.length() << endl;
    cout << "the value of p2 :" << p2 << endl;
    cout << boolalpha;
    cout << "p1 <  p2 :" << (p1 < p2) << endl;
    cout << "p1 >  p2 :" << (p1 > p2) << endl;
    cout << "p1 <= p2 :" << (p1 <= p2) << endl;
    cout << "p1 >= p2 :" << (p1 >= p2) << endl;
    cout << "p1 == p2 :" << (p1 == p2) << endl;
    cout << "p1 != p2 :" << (p1 != p2) << endl;

    return 0;
}