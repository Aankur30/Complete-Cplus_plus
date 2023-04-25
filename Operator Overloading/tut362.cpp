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
     friend point operator+(const point &p1, const point& p2);//const keyword is not allowed with non member function
    ~point()
    { // const keywword are not allowed with constructor or destructor
        cout << "this is a point destructor for " << this << endl;
    }
};
 inline point operator+(const point &p1, const point& p2 ) 
    {
        return point(p1.x+p2.x, p1.y+p2.y);
    }
int main()
{

    point p1(10, 10);
    point p2(20, 20);
    point p3(p1 + p2);
    p3.print_info();

    point p4{p2 + point(5, 5)};
    
    p4.print_info();
    point p5{operator +(p3,p4)};//what compiler do behind the scenes
    p5.print_info();
    (point(20, 20) + point(10, 10)).print_info();
    return 0;
}