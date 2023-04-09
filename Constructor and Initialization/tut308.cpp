#include <iostream>
using namespace std;
struct point
{
    double x;
    double y;

    void display_point() const
    {
        cout << "[x = " << x << " y = " << y << " ]" << endl;
    }
};
int main()
{
    point p1{23.3, 45.5}; // default initialization for x and y
    p1.display_point();
    int scores[]{2, 3, 4, 5, 6, 6}; // default initialization in the array also
    return 0;
}