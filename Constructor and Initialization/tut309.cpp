#include <iostream>
using namespace std;

struct components
{
    double x;
    double y;
    double z;
};
void print_components(components &c)
{

    cout << "  x: " << c.x;
    cout << " y: " << c.y;
    cout << " z: " << c.z << endl;
}
int main()
{
    components c1{.x = 10, .y = 20, .z = 30};
    components c2{
        .x = 10,
        .y = 20,
    };
    components c3{.y = 20, .z = 30};
    // components c4{.x=10,.z=34,.y=45};//compiler error the serial order should be followed
    print_components(c1);
    print_components(c2);
    print_components(c3); // these are valid syntax
    // c1.print_components();in structure this will give compiler error
    return 0;
}