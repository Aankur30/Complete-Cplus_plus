#include <iostream>
#include <math.h>
using namespace std;

class cylinder
{
public:
    cylinder(double radius_para, double height_para) // for the parameterized constructor
    {
        base_radius = radius_para;
        height = height_para;
    }
    // for the default constructor
    cylinder() = default;
    double base_radius;
    double height;

public:
    double volume()
    {
        return M_PI * base_radius * base_radius * height;
    }
};
int main()
{
    cylinder C1, c2;
    cout << "the volume  of C1 is :" << C1.volume() << endl;
    c2.base_radius = 3.0;
    c2.height = 5;
    cout << "the volume of the c2 is :" << c2.volume() << endl;
    cylinder c3;
    cout << "the volume of the c3 is :" << c3.volume();

    return 0;
}