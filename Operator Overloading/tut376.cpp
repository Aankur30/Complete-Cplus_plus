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
    point &operator=(const point &right)
    {
        cout << "copy assignment operator calld" << endl;
        if (this != &right)
        {
            x = right.x;
            y = right.y;
        }
        return *this;
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
    cout << "p1 is" << p1 << endl;
    point p2(40, 30);
    cout << "p2 is" << p2 << endl;
    point p3(100, 100);
    cout << "p3 is" << p3 << endl;
    p1 = p2 = p3; // two times copy assignment operator is called
    cout << "p1 is" << p1 << endl;
    cout << "p2 is" << p2 << endl;
    cout << "p3 is" << p3 << endl;
    return 0;
}