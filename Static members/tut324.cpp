#include <iostream>
using namespace std;
class point
{
private:
    double m_x;
    double m_y;
    static size_t m_point_count;

public:
    point()
    {
        ++m_point_count;
        cout << "this is the constrictor of the point class" << endl;
    }
    static size_t point_info()
    { // const is not allowed to write with the static methods
        return m_point_count;
    }                                   // static function can only return the static member variables and do not have the access to the other members of the class
    static void display(const point &p) // without static we cannot do this
    {
        cout << "[x is = " << p.m_x << " "
             << "y is = " << p.m_y << "]" << endl;
    }
};
size_t point::m_point_count{10}; // this is necessary otherwise we will get the garbage value or the error

int main()
{
    cout << "the count of the point is " << point::point_info() << endl; // this is legal because the fuction is the part of the class not the object
    point p1;
    return 0;
}