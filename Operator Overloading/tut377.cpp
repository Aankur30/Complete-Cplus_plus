#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class car
{
    string name;
    double car_number;

public:
    car() = default;
    car(string c_name, double number) : name{c_name}, car_number{number} {}
    double car_data() const
    {
        return car_number;
    }
    ~car() = default;
};
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

    ~point() = default;
    friend ostream &operator<<(ostream &os, const point &p);
    point &operator=(const car &right_operand)
    {
        x = y = right_operand.car_data();
        return *this;
    }
};
inline ostream &operator<<(ostream &os, const point &p)
{
    return os << " point is [ x: " << p.x << ", y: " << p.y << " ]";
}
int main()
{
    point p1(10, 20);
    car c1("Red", 200);
    p1 = c1;
    cout << "p1 is " << p1 << endl;
    return 0;
}