 #include"cylinder.h"
 #include"constant.h"
cylinder::cylinder(double radius_para, double height_para) // for the parameterized constructor
    {
        base_radius = radius_para;
        height = height_para;
    }
    double cylinder::volume()
    {
        return PI * base_radius * base_radius * height;
    }