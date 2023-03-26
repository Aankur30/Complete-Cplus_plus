#include <iostream>
using namespace std;
#include <math.h>

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
    double weight;

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
    cout << "the volume of the c3 is :" << c3.volume() << endl;
    cylinder *c4 = new cylinder(12, 23);
    cout << "the volume is : " << (*c4).volume()<<endl;
    cout << endl
         << "the volume using the arrow notation is :" << c4->volume()<<endl;
    delete c4;
    cylinder *c5 = &C1;
    cout << "the volume is " << c5->volume()<<endl;
    cout << "sizeof(c5) is : " << sizeof(c5) << endl; // hence it is a pointer so it size should be of 8 bytes
    cout << "the value of c5 is :" << c5 << endl;
    cout << "the sizeof(C1) : " << sizeof(C1) << endl; // size of C1 is 16 bytes;
    // the size of the object depends on the data members of the class

    return 0;
}