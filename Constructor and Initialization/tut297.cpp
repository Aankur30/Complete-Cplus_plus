#include <iostream>
#include <math.h>
using namespace std;

class cylinder
{
private:
    double base_radius; // if this is initialized this will be given preference not the constructor initialisation
    double height;

public:
    // constructors
    cylinder(double radius_para, double height_para = 10)
    {
        base_radius = radius_para;
        height = height_para;
    }
    cylinder() = default;
    // cylinder()//to function this constructor we have to remove above default constructor
    // {
    //     base_radius=0;
    //     height=0;

    // }//this will give compiler error becaue the default constructor is already there so only one member can be passed as default parameter

    // getters
    double get_base_radius() const;
    double get_height() const;
    // setters
    void set_base_radius(double radius_para);
    void set_height(double height_para);
    double volume()
    {
        return M_PI * base_radius * base_radius * height;
    }
    void info()
    {
        cout << "the value of the base_radius is : " << base_radius << endl;
        cout << "the value of the height is : " << height << endl;
    }
};
double cylinder::get_base_radius() const
{
    return base_radius;
}
double cylinder::get_height() const
{
    return height;
}
void cylinder::set_base_radius(double radius_para)
{
    base_radius = radius_para;
}
void cylinder::set_height(double height_para)
{
    height = height_para;
}

int main()
{
    cylinder c1{23}; // default parameter
    c1.info();
    cylinder c2;
    c2.info();
    return 0;
}