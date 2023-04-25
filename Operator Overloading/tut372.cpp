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
    }

    void operator++()
    {
        ++x;
        ++y;
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

    point p1(10, 20);
    for (size_t i{}; i < 11; ++i)
    {
        cout << p1 << endl;
        ++p1;
    }
    return 0;
}