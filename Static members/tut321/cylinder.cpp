#include "cylinder.h"
using namespace std;

const string cylinder::default_color{"Red"};
static const char *char_const;
static const int int_array[5];
static const float float_const;
static const string string_array[5];
// Not static
const float weird_float;
const char *weird_char;
const int weird_int_array[5];

cylinder::cylinder(double radius, double height_para) : weird_float{33.3}, weird_char{"weird"}, weird_int_array{1, 2, 3, 4, 45}
{
    // weird_float=33.3;not allowed to do int the body
    base_radius = radius;
    height = height_para;
}