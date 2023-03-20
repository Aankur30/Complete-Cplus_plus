#include <iostream>
using namespace std;
enum Directions
{
    topleft,
    topright,
    center,
    bottom
};
enum tool
{
    Pen,
    Marker,
    Eraser,
    Sharpner,
    Circle
};
int main()
{
    Directions dir(center);
    tool t(Pen);
    cout << boolalpha;
    cout << " tool > directions: " << (t > dir) << endl;
    cout << "dir : " << dir << endl;
    cout << "t: " << t << endl;
    return 0;
}