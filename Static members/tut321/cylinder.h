#ifndef CYLINDER_H
#define CYLINDER_H
using namespace std;

#include <string>

class cylinder
{
public:
    // int and enum can be initialized in header
    cylinder(double radius, double height_para);
    cylinder() = default;
    static const int constant_int{5};

    enum color
    {
        red = 0,
        green,
        blue
    };
    static const int color_const = color::green;
    // others have to be done in the cpp file
    static const string default_color;
    static const char *char_const;
    static const int int_array[5];
    static const float float_const;
    static const string string_array[5];
    // Not static
    const float weird_float;
    const char *weird_char;
    const int weird_int_array[5]; // they will belong to the object not to the blueprints of the class

private:
    double base_radius{1.0};
    double height{1.0};
    static const size_t PI;
};
#endif // CYLINDER_H
