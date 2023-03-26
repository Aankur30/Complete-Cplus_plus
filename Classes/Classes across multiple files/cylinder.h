#include"constant.h"
class cylinder
{
public:
   cylinder(double radius_para, double height_para);
    // for the default constructor
    cylinder() = default;
    double base_radius;
    double height;
    double volume();
  
};