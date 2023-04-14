#include<iostream>
#include<cmath>
using namespace std;
class point
{
public:
    point() = default;
    point(double x, double y);

private:
    double m_x;
    double m_y;

public:
    // point m_count;// imcomplete type compiler error
    // const point m_origin_point2;// imcomplete type compiler error
    // static inline const point m_origin_point3;// imcomplete type compiler error
    // we are getting these errors because the point class is not completed yet so we dont have the full details about the point class

    point *p_m_origin_point4;
    // this will work because it is a pointer to the class point
public:
    static point m_origin_point5;       // this will work
    static const point m_origin_point6; // this will also work
};
point::point(double x, double y) : m_x(x), m_y(y), p_m_origin_point4(new point()) // infinite recursive calls to constructor
{
    cout << "this is a constructor of point class" << endl;
}
point point::m_origin_point5{1.0, 3.3};
const point point::m_origin_point6{2.0, 4.4}; // const should be written here
int main()
{
    point p1{1.1, 3.3};
    return 0;
}