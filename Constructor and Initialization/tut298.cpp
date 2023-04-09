#include <iostream>
using namespace std;
class cylinder
{
private:
    double base_radius; // if this is initialized this will be given preference not the constructor initialisation
    double height;

public:
    // constructors
    // initializer list initialization
    cylinder(double r, double h) : base_radius(r), height(h)
    { // they avoid unneccessary copies
        cout << "Constructor is called " << endl;
    }
    cylinder() = default;
    // getters
    void show()
    {
        cout << "the base radius of the cylinder is : " << base_radius << endl;
        cout << "the height of the cylinder is : " << height << endl;
    }
};
int main()
{
    cylinder c1{34, 45};
    c1.show();
    return 0;
}