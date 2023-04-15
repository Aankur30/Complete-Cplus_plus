#include "point.h"
namespace Geom
{
    point::point(double x, double y) : m_x{x}, m_y{y}
    {
        cout << "this is the constructor of the point class" << endl;
    }
    point::point() : point(0.0, 0.0)
    {
        cout << "this is the default constructor of point class " << endl;
    }
    point::~point()
    {
        cout << "this is the default destructor of point class " << endl;
    }
}