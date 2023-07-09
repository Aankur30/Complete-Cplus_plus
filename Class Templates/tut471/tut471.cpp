#include <iostream>
#include <type_traits>
#include "boxcontainer.h"
using namespace std;

template <typename T>
class point
{
    static_assert(is_arithmetic_v<T>, "coordinates of point can only be numbers");

public:
    point<T>() = default;
    point<T>(T x, T y) : m_x(x), m_y(y) {}
    friend ostream &operator<<(ostream &out, const point<T> &operand)
    {
        out << "Point [ x :" << operand.m_x << " y :" << operand.m_y << "] ";
        return out;
    }

private:
    T m_x;
    T m_y;
};

int main()
{
    point<int> point_1(10, 20);
    cout << "Point_int :" << point_1 << endl;

    point<double> point_2(10.3, 20.5);
    cout << "Point_double :" << point_2 << endl;

    // point<string> point_string("Hello","World");
    // cout<<"Point_string :"<<point_string<<endl;
    // coordinates can only be numbers
    cout << "Done!!" << endl;

    BoxContainer<point<int>> point_box;
    point_box.add(point_1);
    point_box.add(point<int>(40, 50));

    cout << "Point_box: " << point_box << endl;

    return 0;
}