#include "cylinder.h"

namespace Geom
{
    cylinder::cylinder(double radius, double height_para) : base_rad{radius}, height{height_para}
    {
        cout << "this is the constructor for the cylinder class" << endl;
    }
}