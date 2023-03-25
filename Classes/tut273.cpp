#include <iostream>
#include <math.h>
using namespace std;

class cylinder
{
public:
    double base_radius{1.0};
    double height{1};

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
    cout << "the volume of the c2 is :" << c2.volume();
    return 0;
}