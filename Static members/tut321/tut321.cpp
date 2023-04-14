#include <iostream>
#include <cmath>
#include <string>
#include "cylinder.h"
using namespace std;

int main()
{
    cylinder c1{23.3, 23.3};
    cout << "cylinder default color is " << cylinder::default_color << endl;
    cout << "cylinder default color is " << c1.default_color << endl;

    // dont know what is the error
    return 0;
}