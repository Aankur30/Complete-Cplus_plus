#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
using namespace std;
namespace Geom
{
    class cylinder
    {
    public:
        cylinder(double radius, double height_para);
        double volume() const
        {
            return M_PI * base_rad * base_rad * height;
        }

    private:
        inline static const double M_PI{3.141592653589};
        double base_rad{1};
        double height{1};
    };
}
#endif // CYLINDER_H