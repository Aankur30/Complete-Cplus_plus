#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"
using namespace std;

int main()
{

    Geom::point p1{10.0, 9.0};
    Geom::point p2{20.0, 9.0};
    p1.print_info();
    p2.print_info();

    cout << "--------------------" << endl;
    Geom::line l1{p1, p2};
    l1.print_info();
    cout << "--------------------" << endl;
    Geom::cylinder c1{10.0, 1};
    cout << "the volume of the cylinder " << c1.volume() << endl;
    return 0;
}