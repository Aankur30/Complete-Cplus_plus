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
    istream &operator>>(istream &is)
    { // as a memeber funcction
        double m_x;
        double m_y;
        cout << "thsi is used for the inputting of the data" << endl;
        is >> m_x;
        is >> m_y;
        x = m_x;
        y = m_y;
        return is;
    }
    void print_info() const
    {
        cout << " Point [x: " << x << " y: " << y << " ]" << endl;
    }

    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
};
int main()
{
    point p1;
    p1 >> cin; // this is due to the member function then the first member should be of point class hence p1 is written first
    // try doing with friend function
    p1.print_info();
    return 0;
}