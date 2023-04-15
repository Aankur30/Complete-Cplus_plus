#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
namespace Geom
{
    class point
    {
    public:
        point();
        point(double x, double y);
        void print_info() const
        {
            cout << "["
                 << "x : " << m_x << " , "
                 << "y : " << m_y << " ]" << endl;
        }
        ~point();

    private:
        double m_x;
        double m_y;
    };
}
#endif // POINT_H