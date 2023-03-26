#include <iostream>
#include"constant.h"
#include"cylinder.h"
using namespace std;

int main()
{
    cylinder C1(12,22), c2;
    cout << "the volume  of C1 is :" << C1.volume() << endl;
    c2.base_radius = 3.0;
    c2.height = 5;
    cout << "the volume of the c2 is :" << c2.volume()<<endl;
    cylinder c3;
    cout<<"the volume of the c3 is :"<<c3.volume();

    return 0;
}