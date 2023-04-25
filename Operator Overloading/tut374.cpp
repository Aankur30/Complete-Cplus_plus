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

    void print_info() const
    {
        cout << " Point [x: " << x << " y: " << y << " ]" << endl;
    }
    // void operator++(){
    //     ++x;
    //     ++y;
    // }
    // these were implemented as a member function of point
    //  point operator ++(int){
    //      point local_point(*this);
    //      ++(*this);
    //      return local_point;
    //  }
    friend void operator++(point &operand);
    friend point operator++(point &operand, int);

    ~point()
    {
    }
    friend ostream &operator<<(ostream &os, const point &p);
};
inline ostream &operator<<(ostream &os, const point &p)
{
    return os << " point is [ x: " << p.x << ", y: " << p.y << " ]";
}
void operator++(point &operand)
{
    ++operand.x;
    ++operand.y;
} // implemented as a non member function
point operator++(point &operand, int)
{
    point local_point(operand);
    ++operand;
    return local_point;
}
int main()
{
    point p1(10, 20);
    for (size_t i{}; i < 11; ++i)
    {
        cout << p1 << endl;
        p1++;
    }
    return 0;
}